#include "ll/core/protocol/ServerLoginIntegration.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <map>
#include <mutex>
#include <optional>
#include <random>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/core/Config.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlPackets.h"
#include "ll/core/protocol/DeferredLoginContinuation.h"
#include "ll/core/protocol/Discovery.h"
#include "ll/core/protocol/HandshakeCoordinator.h"
#include "ll/core/protocol/PayloadDispatcher.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolError.h"
#include "ll/core/protocol/ProtocolRuntime.h"
#include "ll/core/protocol/ServerEndpoint.h"
#include "ll/core/protocol/ServerInboundGate.h"
#include "ll/core/protocol/ServerTransport.h"

#include "mc/deps/certificates/WebToken.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkConnection.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/NetworkSystem.h"
#include "mc/network/PacketSender.h"
#include "mc/network/RemoteConnector.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/ServerNetworkSystem.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/DisconnectPacket.h"

namespace ll::protocol::detail {

namespace server_login_detail {

TransportLimits configuredLimits() {
    auto const& limits = ll::getLeviConfig().targeted.protocol.limits;
    return {
        Limits::MaxControlBody,
        limits.maxPayloadBody,
        limits.maxPacketsPerSecond,
        limits.maxBytesPerSecond,
        limits.burstPackets,
        limits.burstBytes,
    };
}

Expected<std::vector<ModuleId>> configuredRequiredModules() {
    std::vector<ModuleId> result;

    auto const& configured = ll::getLeviConfig().targeted.protocol.requiredModules;
    result.reserve(configured.size());

    for (auto const& value : configured) {
        auto parsed = ModuleId::parse(value);
        if (!parsed) return forwardError(parsed.error());

        result.emplace_back(std::move(*parsed));
    }

    return result;
}

std::string_view disconnectMessage(Connection::DisconnectFailReason reason) noexcept {
    switch (reason) {
    case Connection::DisconnectFailReason::ClientSettingsIncompatibleWithServer:
        return "LeviLamina is required to join this server.";
    case Connection::DisconnectFailReason::VersionMismatch:
        return "Incompatible LeviLamina protocol version.";
    case Connection::DisconnectFailReason::Timeout:
        return "LeviLamina protocol negotiation timed out.";
    case Connection::DisconnectFailReason::BadPacket:
    case Connection::DisconnectFailReason::UnexpectedPacket:
        return "Invalid LeviLamina protocol packet.";
    default:
        return "LeviLamina protocol negotiation failed.";
    }
}

Connection::DisconnectFailReason disconnectReason(ProtocolErrc error) noexcept {
    switch (error) {
    case ProtocolErrc::VersionIncompatible:
        return Connection::DisconnectFailReason::VersionMismatch;
    case ProtocolErrc::RequirementUnsatisfied:
        return Connection::DisconnectFailReason::ClientSettingsIncompatibleWithServer;
    case ProtocolErrc::Timeout:
        return Connection::DisconnectFailReason::Timeout;
    case ProtocolErrc::InternalFailure:
        return Connection::DisconnectFailReason::UnrecoverableError;
    default:
        return Connection::DisconnectFailReason::BadPacket;
    }
}

std::string peerDiagnostic(Error& error) {
    if (error.isA<ProtocolErrorInfo>()) return error.as<ProtocolErrorInfo>().context;
    if (error.isA<CodecErrorInfo>()) return error.as<CodecErrorInfo>().context;
    if (error.isA<SessionErrorInfo>()) return error.as<SessionErrorInfo>().context;
    return {};
}

std::string disconnectMessage(ProtocolErrc error, std::string_view diagnostic) {
    switch (error) {
    case ProtocolErrc::RequirementUnsatisfied: {
        std::string message{"Required LeviLamina capability is unavailable"};
        if (!diagnostic.empty()) message.append(": ").append(diagnostic);

        message.push_back('.');
        return message;
    }
    case ProtocolErrc::VersionIncompatible:
        return "Incompatible LeviLamina protocol version.";
    case ProtocolErrc::Timeout:
        return "LeviLamina protocol negotiation timed out.";
    case ProtocolErrc::RateLimitExceeded:
        return "LeviLamina protocol rate limit exceeded.";
    case ProtocolErrc::InternalFailure:
        return "LeviLamina protocol negotiation failed.";
    default:
        return "Invalid LeviLamina protocol packet.";
    }
}

bool isPeerFailure(ProtocolErrc error) noexcept { return error != ProtocolErrc::InternalFailure; }

void disconnectPrelogin(
    NetworkIdentifier const&         id,
    SubClientId                      subClientId,
    Connection::DisconnectFailReason reason,
    std::string                      message = {}
) {
    auto endpoint = getServerEndpoint();
    if (!endpoint) return;

    auto generation = endpoint->currentGeneration(id);
    if (generation == 0) return;

    thread::ServerThreadExecutor::getDefault().execute(
        [id, subClientId, reason, generation, message = std::move(message)]() mutable {
            auto endpoint = getServerEndpoint();
            auto handler  = service::getServerNetworkHandler();
            if (!endpoint || !handler || endpoint->currentGeneration(id) != generation) return;

            auto* connection = endpoint->findLiveConnection(id, generation);
            if (!connection) return;

            auto connectionId = connection->mId;

            if (message.empty()) message = disconnectMessage(reason);
            try {
                DisconnectPacket packet{
                    DisconnectPacketPayload{reason, message, std::nullopt}
                };
                handler->mPacketSender->sendToClient(connectionId, packet, subClientId);
            } catch (...) {}

            auto& network = handler->mNetwork;
            network.onConnectionClosed(connectionId, reason, message, {}, false, {});
            network.getRemoteConnector()->closeNetworkConnection(connectionId);
        }
    );
}

Nonce randomNonce() {
    std::random_device random;
    for (std::size_t attempt = 0; attempt < 16; ++attempt) {
        Nonce nonce{};
        for (auto& value : nonce) {
            value = static_cast<std::byte>(random() & 0xFFU);
        }

        if (nonce != Nonce{}) return nonce;
    }

    return {};
}

} // namespace server_login_detail

struct ServerLoginIntegration::Impl {
    struct DiscoveryRecord {
        std::optional<DiscoveryMarker>             marker;
        std::shared_ptr<data::CancellableCallback> deadline;
    };

    struct Entry {
        ServerInboundGateKey                       key;
        NetworkIdentifier                          networkId;
        std::mutex                                 mutex;
        std::uint64_t                              handshakeId{};
        std::shared_ptr<ProtocolSession>           session;
        std::shared_ptr<ServerTransport>           transport;
        std::unique_ptr<HandshakeCoordinator>      handshake;
        std::shared_ptr<DeferredLoginContinuation> continuation;
        std::shared_ptr<data::CancellableCallback> deadline;
        std::atomic_bool                           terminating{};

        Entry(ServerInboundGateKey valueKey, NetworkIdentifier const& valueNetworkId)
        : key(std::move(valueKey)),
          networkId(valueNetworkId) {}
    };

    std::mutex                                             mutex;
    std::map<ServerInboundGateKey, std::shared_ptr<Entry>> entries;
    std::map<ServerInboundGateKey, DiscoveryRecord>        discoveries;
    ServerInboundGate                                      gate;
    std::atomic_bool                                       initialized{};
    std::atomic_bool                                       stopping{};

    [[nodiscard]] std::uint64_t allocateHandshakeId() noexcept {
        try {
            std::random_device random;
            for (std::size_t attempt = 0; attempt < 16; ++attempt) {
                std::uint64_t result{};
                for (std::size_t index = 0; index < sizeof(result); ++index) {
                    result |= static_cast<std::uint64_t>(random() & 0xFFU) << (index * CHAR_BIT);
                }

                if (result != 0) return result;
            }
        } catch (...) {}

        return 0;
    }

    std::shared_ptr<Entry> find(ServerInboundGateKey const& key) {
        std::scoped_lock lock{mutex};

        auto found = entries.find(key);
        return found == entries.end() ? nullptr : found->second;
    }

    std::shared_ptr<Entry> extract(ServerInboundGateKey const& key) {
        std::scoped_lock lock{mutex};

        auto found = entries.find(key);
        if (found == entries.end()) return nullptr;

        auto entry = std::move(found->second);

        entries.erase(found);
        return entry;
    }

    std::optional<DiscoveryMarker> findDiscovery(ServerInboundGateKey const& key) {
        std::scoped_lock lock{mutex};

        auto discovered = discoveries.find(key);
        return discovered == discoveries.end() ? std::nullopt : discovered->second.marker;
    }

    void eraseDiscovery(ServerInboundGateKey const& key) {
        std::shared_ptr<data::CancellableCallback> deadline;
        {
            std::scoped_lock lock{mutex};

            auto discovered = discoveries.extract(key);
            if (!discovered.empty()) deadline = std::move(discovered.mapped().deadline);
        }

        if (deadline) deadline->cancel();
    }

    void expireDiscovery(ServerInboundGateKey const& key) {
        std::scoped_lock lock{mutex};
        discoveries.erase(key);
    }

    void cancel(std::shared_ptr<Entry> const& entry) {
        if (!entry) return;

        gate.revoke(entry->key);
        if (entry->deadline) entry->deadline->cancel();
        if (entry->continuation) (void)entry->continuation->cancel();
    }

    Expected<> send(std::shared_ptr<Entry> const& entry, HandshakeProgress const& progress) {
        for (auto const& message : progress.outbound) {
            auto packet = ControlPacket::create(
                message,
                entry->handshake->coreProtocol(),
                static_cast<SubClientId>(entry->key.subClientId),
                entry->handshake->limits().maxControlBody
            );

            if (!packet) return forwardError(packet.error());
            if (auto sent = entry->transport->sendControl(std::move(*packet)); !sent) return sent;
        }

        return {};
    }

    bool rejectPending(std::shared_ptr<Entry> const& entry, ProtocolErrc error) {
        if (!entry || entry->terminating.exchange(true, std::memory_order_acq_rel)) return false;

        cancel(entry);
        extract(entry->key);

        if (auto endpoint = getServerEndpoint()) {
            endpoint->reportProtocolError(entry->session, error);
            endpoint->closeSubclient(entry->networkId, entry->key.subClientId, ProtocolCloseReason::ProtocolError);
        }
        return true;
    }

    Expected<> notifyPeer(
        std::shared_ptr<Entry> const& entry,
        ProtocolErrc                  error,
        std::uint32_t                 offendingMessageSequence,
        std::string                   diagnostic
    ) {
        if (!entry || !entry->session || !entry->handshake || !entry->transport) return {};

        auto const  coreProtocol = entry->handshake->coreProtocol();
        auto const* definition   = findCoreProtocolDefinition(coreProtocol);
        if (!definition) return {};

        auto header = entry->session->nextOutboundHeader(definition->controlSchema);
        if (!header) return forwardError(header.error());

        // clang-format off
        auto packet = ControlPacket::create(
            ControlMessage{
                ProtocolErrorMessage{
                    *header,
                    toWireErrorCode(error),
                    true, offendingMessageSequence,
                    std::move(diagnostic),
                }
            },
            coreProtocol,
            static_cast<SubClientId>(entry->key.subClientId),
            entry->handshake->limits().maxControlBody
        );
        // clang-format on

        if (!packet) return forwardError(packet.error());
        return entry->transport->sendControl(std::move(*packet));
    }

    void terminate(
        std::shared_ptr<Entry> const& entry,
        ProtocolErrc                  error,
        std::uint32_t                 offendingMessageSequence = 0,
        std::string const&            diagnostic               = {},
        bool                          notify                   = true
    ) {
        if (!entry) return;
        if (notify) (void)notifyPeer(entry, error, offendingMessageSequence, diagnostic);
        if (!rejectPending(entry, error)) return;

        server_login_detail::disconnectPrelogin(
            entry->networkId,
            static_cast<SubClientId>(entry->key.subClientId),
            server_login_detail::disconnectReason(error),
            server_login_detail::disconnectMessage(error, diagnostic)
        );
    }
};

ServerLoginIntegration::ServerLoginIntegration() : mImpl(std::make_unique<Impl>()) {}
ServerLoginIntegration::~ServerLoginIntegration() = default;

Expected<> ServerLoginIntegration::initialize() {
    if (mImpl->initialized.exchange(true, std::memory_order_acq_rel)) return {};

    mImpl->stopping.store(false, std::memory_order_release);

    auto result = ProtocolRuntime::getInstance().setReceiver(*this);
    if (!result) {
        mImpl->initialized.store(false, std::memory_order_release);
    }

    return result;
}

void ServerLoginIntegration::shutdown() {
    if (mImpl->stopping.exchange(true, std::memory_order_acq_rel)) return;

    closeAll();
}

void ServerLoginIntegration::observeConnectionRequest(
    NetworkIdentifier const& id,
    std::uint8_t             subClientId,
    ConnectionRequest const& request
) noexcept {
    try {
        if (!ll::getLeviConfig().targeted.protocol.enabled || mImpl->stopping.load(std::memory_order_acquire)) return;

        auto endpoint = getServerEndpoint();
        if (!endpoint) return;

        auto generation = endpoint->currentGeneration(id);
        if (generation == 0) return;

        std::optional<DiscoveryMarker> marker;
        if (request.mRawToken) {
            auto parsed = parseDiscoveryMarker(request.mRawToken->mDataInfo);
            if (parsed) marker = std::move(*parsed);
        }

        auto key = ServerInboundGateKey{
            id.toString(),
            subClientId,
            generation,
        };

        auto timeout  = std::chrono::seconds{ll::getLeviConfig().targeted.protocol.limits.handshakeTimeoutSeconds};
        auto deadline = thread::ServerThreadExecutor::getDefault().executeAfter(
            [this, key] { mImpl->expireDiscovery(key); },
            timeout
        );

        bool inserted;
        try {
            std::scoped_lock lock{mImpl->mutex};
            inserted = mImpl->discoveries.try_emplace(key, Impl::DiscoveryRecord{std::move(marker), deadline}).second;
        } catch (...) {
            if (deadline) deadline->cancel();
            throw;
        }

        if (!inserted && deadline) deadline->cancel();
    } catch (...) {}
}

ServerLoginIntegration::HandshakeDisposition
ServerLoginIntegration::handleHandshake(ServerNetworkHandler&, NetworkIdentifierWithSubId const& sender) {
    auto const& id          = sender.id;
    auto const  subClientId = sender.subClientId;

    try {
        auto const& config = ll::getLeviConfig().targeted.protocol;
        if (!config.enabled || mImpl->stopping.load(std::memory_order_acquire)) {
            return HandshakeDisposition::ContinueVanilla;
        }

        auto endpoint = getServerEndpoint();
        if (!endpoint) return HandshakeDisposition::ContinueVanilla;

        auto generation = endpoint->currentGeneration(id);
        if (generation == 0) return HandshakeDisposition::ContinueVanilla;

        ServerInboundGateKey key{id.toString(), static_cast<std::uint8_t>(subClientId), generation};

        if (auto duplicate = mImpl->find(key)) {
            endpoint->reportProtocolError(duplicate->session, ProtocolErrc::UnexpectedMessage);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::UnexpectedPacket
            );
            return HandshakeDisposition::Rejected;
        }

        auto marker = mImpl->findDiscovery(key);

        if (!marker) {
            mImpl->eraseDiscovery(key);
            if (!config.requireLoader) return HandshakeDisposition::ContinueVanilla;

            endpoint->reportProtocolError(nullptr, ProtocolErrc::InvalidControlSchema);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::ClientSettingsIncompatibleWithServer
            );
            return HandshakeDisposition::Rejected;
        }

        auto selected = marker->protocols.highestCommon(SupportedCoreProtocolVersions);
        if (!selected) {
            mImpl->eraseDiscovery(key);
            endpoint->reportProtocolError(nullptr, ProtocolErrc::VersionIncompatible);

            server_login_detail::disconnectPrelogin(id, subClientId, Connection::DisconnectFailReason::VersionMismatch);
            return HandshakeDisposition::Rejected;
        }

        auto handshakeId = mImpl->allocateHandshakeId();
        if (handshakeId == 0) {
            mImpl->eraseDiscovery(key);
            endpoint->reportProtocolError(nullptr, ProtocolErrc::InternalFailure);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::UnrecoverableError
            );
            return HandshakeDisposition::Rejected;
        }

        auto requiredModules = server_login_detail::configuredRequiredModules();
        if (!requiredModules) {
            mImpl->eraseDiscovery(key);
            endpoint->reportProtocolError(nullptr, ProtocolErrc::InternalFailure);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::UnrecoverableError
            );
            return HandshakeDisposition::Rejected;
        }

        auto limits    = server_login_detail::configuredLimits();
        auto registry  = PayloadRegistryAccess::snapshot(PayloadRegistry::getInstance());
        auto transport = std::make_shared<ServerTransport>(sender, generation);

        auto session = endpoint->openSession(sender, generation, handshakeId, registry, transport, limits);
        if (!session) {
            mImpl->eraseDiscovery(key);
            endpoint->reportProtocolError(nullptr, ProtocolErrc::InternalFailure);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::UnrecoverableError
            );
            return HandshakeDisposition::Rejected;
        }

        auto entry = std::make_shared<Impl::Entry>(key, id);

        entry->handshakeId = handshakeId;
        entry->session     = *session;
        entry->transport   = std::move(transport);
        entry->handshake   = std::make_unique<HandshakeCoordinator>(
            EndpointRole::Server,
            *session,
            std::move(registry),
            limits,
            std::move(*requiredModules)
        );
        entry->continuation = std::make_shared<DeferredLoginContinuation>((*session)->identity().key, handshakeId);

        bool inserted;
        {
            std::scoped_lock lock{mImpl->mutex};
            inserted = mImpl->entries.try_emplace(key, entry).second;
        }
        if (!inserted) {
            entry->continuation->cancel();

            endpoint->reportProtocolError(entry->session, ProtocolErrc::UnexpectedMessage);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::UnexpectedPacket
            );
            return HandshakeDisposition::Rejected;
        }
        mImpl->eraseDiscovery(key);

        if (!mImpl->gate.grant(key, limits)) {
            mImpl->cancel(mImpl->extract(key));

            endpoint->reportProtocolError(entry->session, ProtocolErrc::InternalFailure);

            server_login_detail::disconnectPrelogin(
                id,
                subClientId,
                Connection::DisconnectFailReason::UnrecoverableError
            );
            return HandshakeDisposition::Rejected;
        }

        auto timeout    = std::chrono::seconds{config.limits.handshakeTimeoutSeconds};
        entry->deadline = thread::ServerThreadExecutor::getDefault().executeAfter(
            [this, key, handshakeId] {
                auto entry = mImpl->find(key);
                if (!entry || entry->handshakeId != handshakeId) return;

                std::scoped_lock entryLock{entry->mutex};
                if (!entry->terminating.exchange(true, std::memory_order_acq_rel)) {
                    mImpl->cancel(entry);
                    mImpl->extract(key);

                    auto endpoint = getServerEndpoint();
                    auto handler  = service::getServerNetworkHandler();
                    if (!endpoint || !handler || endpoint->currentGeneration(entry->networkId) != key.generation) {
                        return;
                    }

                    auto* connection = endpoint->findLiveConnection(entry->networkId, key.generation);
                    if (!connection) return;

                    endpoint->reportProtocolError(entry->session, ProtocolErrc::Timeout);

                    endpoint->closeSubclient(entry->networkId, key.subClientId, ProtocolCloseReason::Timeout);
                    server_login_detail::disconnectPrelogin(
                        connection->mId,
                        static_cast<SubClientId>(key.subClientId),
                        Connection::DisconnectFailReason::Timeout
                    );
                }
            },
            timeout
        );

        auto progress = entry->handshake->startServer(*selected, server_login_detail::randomNonce());
        if (!progress) {
            auto error = classifyProtocolError(progress.error(), ProtocolErrc::InvalidControlSchema);

            mImpl->terminate(entry, error);
            return HandshakeDisposition::Rejected;
        }
        if (auto sent = mImpl->send(entry, *progress); !sent) {
            auto error = classifyProtocolError(sent.error(), ProtocolErrc::InternalFailure);

            mImpl->terminate(entry, error);
            return HandshakeDisposition::Rejected;
        }

        return HandshakeDisposition::Deferred;
    } catch (...) {
        if (auto endpoint = getServerEndpoint()) {
            endpoint->reportProtocolError(nullptr, ProtocolErrc::InternalFailure);
        }

        server_login_detail::disconnectPrelogin(id, subClientId, Connection::DisconnectFailReason::UnrecoverableError);
        return HandshakeDisposition::Rejected;
    }
}

ServerLoginIntegration::InboundDisposition
ServerLoginIntegration::filterIncoming(NetworkIdentifierWithSubId const& sender, std::size_t packetSize) {
    auto endpoint = getServerEndpoint();
    if (!endpoint) return InboundDisposition::UseNativePolicy;

    auto generation = endpoint->currentGeneration(sender.id);
    if (generation == 0) return InboundDisposition::UseNativePolicy;

    auto key = ServerInboundGateKey{
        sender.id.toString(),
        static_cast<std::uint8_t>(sender.subClientId),
        generation,
    };
    if (mImpl->gate.contains(key)) {
        if (mImpl->gate.admit(key, packetSize)) return InboundDisposition::Allowed;

        mImpl->terminate(mImpl->find(key), ProtocolErrc::RateLimitExceeded);
        return InboundDisposition::Rejected;
    }

    auto entry = mImpl->find(key);
    if (!entry || !entry->session || entry->session->state() != SessionState::Active) {
        return InboundDisposition::UseNativePolicy;
    }
    if (entry->session->admitInbound(packetSize)) return InboundDisposition::UseNativePolicy;

    mImpl->terminate(entry, ProtocolErrc::RateLimitExceeded);
    return InboundDisposition::Rejected;
}

void ServerLoginIntegration::closeSubclient(NetworkIdentifier const& id, std::uint8_t subClientId) {
    auto endpoint = getServerEndpoint();

    auto generation = endpoint ? endpoint->currentGeneration(id) : 0;
    if (generation == 0) return;

    auto key = ServerInboundGateKey{id.toString(), subClientId, generation};
    mImpl->eraseDiscovery(key);
    mImpl->cancel(mImpl->extract(key));
}

void ServerLoginIntegration::closeConnection(NetworkIdentifier const& id) {
    auto endpoint = getServerEndpoint();

    auto generation = endpoint ? endpoint->currentGeneration(id) : 0;
    if (generation == 0) return;

    std::vector<std::shared_ptr<Impl::Entry>>               removed;
    std::vector<std::shared_ptr<data::CancellableCallback>> discoveryDeadlines;
    {
        std::scoped_lock lock{mImpl->mutex};

        auto const connection = id.toString();
        for (auto it = mImpl->entries.begin(); it != mImpl->entries.end();) {
            if (it->first.connection == connection && it->first.generation == generation) {
                removed.push_back(std::move(it->second));
                it = mImpl->entries.erase(it);
            } else {
                ++it;
            }
        }
        for (auto it = mImpl->discoveries.begin(); it != mImpl->discoveries.end();) {
            if (it->first.connection == connection && it->first.generation == generation) {
                discoveryDeadlines.push_back(std::move(it->second.deadline));
                it = mImpl->discoveries.erase(it);
            } else {
                ++it;
            }
        }
    }

    for (auto const& deadline : discoveryDeadlines) {
        if (deadline) deadline->cancel();
    }

    for (auto const& entry : removed) {
        mImpl->cancel(entry);
    }
}

void ServerLoginIntegration::closeAll() {
    std::map<ServerInboundGateKey, std::shared_ptr<Impl::Entry>> removed;
    std::map<ServerInboundGateKey, Impl::DiscoveryRecord>        removedDiscoveries;
    {
        std::scoped_lock lock{mImpl->mutex};

        removed.swap(mImpl->entries);
        removedDiscoveries.swap(mImpl->discoveries);
    }

    mImpl->gate.clear();
    for (auto const& discovery : removedDiscoveries | std::views::values) {
        if (discovery.deadline) discovery.deadline->cancel();
    }

    for (auto const& entry : removed | std::views::values) {
        mImpl->cancel(entry);
    }
}

Expected<> ServerLoginIntegration::receive(
    NetworkIdentifier const& networkId,
    NetEventCallback&        callback,
    ControlPacket const&     packet
) {
    auto endpoint = getServerEndpoint();
    if (!endpoint) return makeSessionError(SessionErrc::TransportUnavailable);

    auto generation = endpoint->currentGeneration(networkId);

    auto key = ServerInboundGateKey{
        networkId.toString(),
        static_cast<std::uint8_t>(packet.mSenderSubId),
        generation,
    };

    auto entry = mImpl->find(key);
    if (!entry || generation == 0) {
        return makeSessionError(SessionErrc::NotNegotiated);
    }

    Expected<>    result;
    std::uint32_t offendingMessageSequence{};
    bool          peerReportedError{};
    bool          resumeLogin{};
    {
        std::scoped_lock entryLock{entry->mutex};
        result = [&]() -> Expected<> {
            if (entry->terminating.load(std::memory_order_acquire)) {
                return makeSessionError(SessionErrc::Closed);
            }

            auto message = packet.decode(entry->handshake->coreProtocol(), entry->handshake->limits().maxControlBody);
            if (!message) return forwardError(message.error());

            offendingMessageSequence =
                std::visit([](auto const& value) { return value.header.messageSequence; }, *message);
            peerReportedError = std::holds_alternative<ProtocolErrorMessage>(*message);

            auto progress = entry->handshake->receive(std::move(*message), packet.body().size());
            if (!progress) return forwardError(progress.error());

            HandshakeProgress outbound{std::move(progress->outbound), false};
            if (auto sent = mImpl->send(entry, outbound); !sent) return sent;

            if (!progress->protocolReady) return {};

            mImpl->gate.revoke(key);
            if (entry->deadline) entry->deadline->cancel();
            resumeLogin = true;
            return {};
        }();
    }

    if (result && resumeLogin) {
        result = entry->continuation->consume([&]() -> Expected<> {
            auto currentEndpoint = getServerEndpoint();
            if (!currentEndpoint || currentEndpoint != endpoint
                || currentEndpoint->currentGeneration(networkId) != key.generation) {
                return makeSessionError(SessionErrc::WrongGeneration);
            }

            auto* connection = currentEndpoint->findLiveConnection(networkId, key.generation);
            if (!connection || !(connection->mId == networkId)) {
                return makeTransportError(TransportErrc::EndpointGone);
            }

            return invokeOriginalClientHandshake(
                callback,
                NetworkIdentifierWithSubId{
                    connection->mId,
                    static_cast<SubClientId>(key.subClientId),
                }
            );
        });
        if (result) result = endpoint->activateSession(entry->session);
    }

    if (!result) {
        auto diagnostic = server_login_detail::peerDiagnostic(result.error());

        auto error = classifyProtocolError(result.error(), ProtocolErrc::InvalidControlSchema);
        mImpl->terminate(entry, error, offendingMessageSequence, diagnostic, !peerReportedError);

        if (server_login_detail::isPeerFailure(error)) return {};
    }

    return result;
}

Expected<> ServerLoginIntegration::receive(
    NetworkIdentifier const&           networkId,
    [[maybe_unused]] NetEventCallback& callback,
    ProtocolEnvelopePacket const&      packet
) {
    auto endpoint = getServerEndpoint();
    if (!endpoint) return makeSessionError(SessionErrc::TransportUnavailable);

    auto generation = endpoint->currentGeneration(networkId);
    if (generation == 0) return makeSessionError(SessionErrc::WrongGeneration);

    auto session = endpoint->findSession(networkId, static_cast<std::uint8_t>(packet.mSenderSubId), generation);

    auto result = PayloadDispatcher{}.dispatch(session, packet);
    if (!result) {
        auto key = ServerInboundGateKey{
            networkId.toString(),
            static_cast<std::uint8_t>(packet.mSenderSubId),
            generation,
        };

        auto diagnostic = server_login_detail::peerDiagnostic(result.error());
        auto error      = classifyProtocolError(result.error(), ProtocolErrc::MalformedPayload);
        mImpl->terminate(mImpl->find(key), error, 0, diagnostic);
        if (server_login_detail::isPeerFailure(error)) return {};
    }

    return result;
}

ServerLoginIntegration& getServerLoginIntegration() {
    static ServerLoginIntegration integration;
    return integration;
}

} // namespace ll::protocol::detail

namespace ll::protocol::server {

Expected<> initializeLoginIntegration() { return detail::getServerLoginIntegration().initialize(); }

void shutdownLoginIntegration() { detail::getServerLoginIntegration().shutdown(); }

} // namespace ll::protocol::server
