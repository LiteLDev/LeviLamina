#include "ll/core/protocol/ClientLoginIntegration.h"

#include <atomic>
#include <chrono>
#include <map>
#include <mutex>
#include <optional>
#include <random>
#include <ranges>
#include <string>
#include <utility>
#include <vector>

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/Config.h"
#include "ll/core/protocol/ClientEndpoint.h"
#include "ll/core/protocol/ClientTransport.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlPackets.h"
#include "ll/core/protocol/HandshakeCoordinator.h"
#include "ll/core/protocol/PayloadDispatcher.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolError.h"
#include "ll/core/protocol/ProtocolRuntime.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/network/ClientNetworkHandler.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/PlayStatus.h"

namespace ll::protocol::detail {

namespace client_login_detail {

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

} // namespace client_login_detail

struct ClientLoginIntegration::Impl {
    enum class State : std::uint8_t {
        AwaitingServer,
        Negotiating,
        ProtocolReady,
        Active,
        Vanilla,
        Failed,
    };

    struct Key {
        std::string   connection;
        std::uint64_t generation{};
        auto          operator<=>(Key const&) const = default;
    };

    struct Entry {
        Key                                                  key;
        NetworkIdentifier                                    networkId;
        std::mutex                                           mutex;
        State                                                state{State::AwaitingServer};
        std::shared_ptr<ProtocolSession>                     session;
        std::shared_ptr<ClientTransport>                     transport;
        std::unique_ptr<HandshakeCoordinator>                handshake;
        std::optional<std::chrono::steady_clock::time_point> deadline;

        Entry(Key valueKey, NetworkIdentifier const& valueNetworkId)
        : key(std::move(valueKey)),
          networkId(valueNetworkId) {}
    };

    std::mutex                            mutex;
    std::map<Key, std::shared_ptr<Entry>> entries;
    std::atomic_bool                      initialized{};
    std::atomic_bool                      stopping{};

    std::shared_ptr<Entry> find(Key const& key) {
        std::scoped_lock lock{mutex};

        auto found = entries.find(key);
        return found == entries.end() ? nullptr : found->second;
    }

    bool erase(Key const& key, Entry const* expected = nullptr) {
        std::scoped_lock lock{mutex};

        auto found = entries.find(key);
        if (found == entries.end() || (expected && found->second.get() != expected)) return false;

        entries.erase(found);
        return true;
    }

    void fail(std::shared_ptr<Entry> const& entry, NetEventCallback& callback, ProtocolErrc error) {
        if (!entry) return;
        {
            std::scoped_lock lock{entry->mutex};
            entry->state = State::Failed;

            entry->deadline.reset();
        }

        if (!erase(entry->key, entry.get())) return;
        if (auto endpoint = getClientEndpoint();
            endpoint && endpoint->currentGeneration(entry->networkId) == entry->key.generation) {
            endpoint->reportProtocolError(entry->session, error);
            endpoint->closeConnection(entry->networkId, ProtocolCloseReason::ProtocolError);
        } else {
            return;
        }

        static_cast<ClientNetworkHandler&>(callback)._disconnectFromServer(entry->networkId);
    }

    Expected<> send(std::shared_ptr<Entry> const& entry, HandshakeProgress const& progress) {
        for (auto const& message : progress.outbound) {
            auto packet = ControlPacket::create(
                message,
                entry->handshake->coreProtocol(),
                SubClientId::PrimaryClient,
                entry->handshake->limits().maxControlBody
            );

            if (!packet) return forwardError(packet.error());
            if (auto sent = entry->transport->sendControl(std::move(*packet)); !sent) return sent;
        }

        return {};
    }
};

ClientLoginIntegration::ClientLoginIntegration() : mImpl(std::make_unique<Impl>()) {}
ClientLoginIntegration::~ClientLoginIntegration() = default;

Expected<> ClientLoginIntegration::initialize() {
    if (mImpl->initialized.exchange(true, std::memory_order_acq_rel)) return {};
    mImpl->stopping.store(false, std::memory_order_release);

    auto result = ProtocolRuntime::getInstance().setReceiver(*this);
    if (!result) {
        mImpl->initialized.store(false, std::memory_order_release);
    }

    return result;
}

void ClientLoginIntegration::shutdown() {
    if (mImpl->stopping.exchange(true, std::memory_order_acq_rel)) return;
    closeAll();
}

void ClientLoginIntegration::observeConnection(NetworkIdentifier const& id) noexcept {
    try {
        auto endpoint = getClientEndpoint();

        auto generation = endpoint ? endpoint->currentGeneration(id) : 0;
        if (generation == 0) return;

        auto entry = std::make_shared<Impl::Entry>(Impl::Key{id.toString(), generation}, id);
        if (!ll::getLeviConfig().targeted.protocol.enabled) entry->state = Impl::State::Vanilla;

        std::scoped_lock lock{mImpl->mutex};
        mImpl->entries.insert_or_assign(entry->key, std::move(entry));
    } catch (...) {}
}

void ClientLoginIntegration::closeConnection(NetworkIdentifier const& id) noexcept {
    try {
        auto connection = id.toString();

        std::map<Impl::Key, std::shared_ptr<Impl::Entry>> removed;
        {
            std::scoped_lock lock{mImpl->mutex};
            for (auto it = mImpl->entries.begin(); it != mImpl->entries.end();) {
                if (it->first.connection == connection) {
                    removed.emplace(it->first, std::move(it->second));
                    it = mImpl->entries.erase(it);
                } else {
                    ++it;
                }
            }
        }

    } catch (...) {}
}

void ClientLoginIntegration::closeAll() noexcept {
    try {
        std::map<Impl::Key, std::shared_ptr<Impl::Entry>> removed;
        {
            std::scoped_lock lock{mImpl->mutex};
            removed.swap(mImpl->entries);
        }
    } catch (...) {}
}

void ClientLoginIntegration::pollTimeouts(ClientInstance& client) noexcept {
    try {
        std::vector<std::shared_ptr<Impl::Entry>> entries;
        {
            std::scoped_lock lock{mImpl->mutex};
            entries.reserve(mImpl->entries.size());

            for (auto const& entry : mImpl->entries | std::views::values) {
                entries.emplace_back(entry);
            }
        }

        std::vector<std::shared_ptr<Impl::Entry>> expired;
        auto const                                now = std::chrono::steady_clock::now();
        for (auto const& entry : entries) {
            {
                std::scoped_lock entryLock{entry->mutex};
                if (!entry->deadline || now < *entry->deadline
                    || (entry->state != Impl::State::Negotiating && entry->state != Impl::State::ProtocolReady)) {
                    continue;
                }

                entry->state = Impl::State::Failed;
                entry->deadline.reset();
            }

            if (mImpl->erase(entry->key, entry.get())) expired.emplace_back(entry);
        }

        for (auto const& entry : expired) {
            auto endpoint = getClientEndpoint();
            if (!endpoint || endpoint->currentGeneration(entry->networkId) != entry->key.generation) continue;

            endpoint->reportProtocolError(entry->session, ProtocolErrc::Timeout);
            endpoint->closeConnection(entry->networkId, ProtocolCloseReason::Timeout);

            client.flagDisconnectionAndNotify(Connection::DisconnectFailReason::Timeout);
        }
    } catch (...) {}
}

ClientLoginIntegration::LoginSuccessDisposition
ClientLoginIntegration::beforePlayStatus(NetworkIdentifier const& id, PlayStatus status) noexcept {
    try {
        auto endpoint = getClientEndpoint();

        auto generation = endpoint ? endpoint->currentGeneration(id) : 0;
        if (generation == 0) return LoginSuccessDisposition::Reject;

        auto entry = mImpl->find({id.toString(), generation});
        if (!entry) return LoginSuccessDisposition::ContinueVanilla;

        std::scoped_lock lock{entry->mutex};
        if (status != PlayStatus::LoginSuccess) {
            if (status != PlayStatus::PlayerSpawn) {
                entry->state = Impl::State::Failed;
            }

            return LoginSuccessDisposition::ContinueVanilla;
        }

        switch (entry->state) {
        case Impl::State::AwaitingServer:
        case Impl::State::Vanilla:
            entry->state = Impl::State::Vanilla;
            entry->deadline.reset();
            return LoginSuccessDisposition::ContinueVanilla;
        case Impl::State::ProtocolReady:
            return LoginSuccessDisposition::ActivateAfterOrigin;
        default:
            entry->state = Impl::State::Failed;
            return LoginSuccessDisposition::Reject;
        }
    } catch (...) {
        return LoginSuccessDisposition::Reject;
    }
}

Expected<> ClientLoginIntegration::completeLoginSuccess(NetworkIdentifier const& id) noexcept {
    try {
        auto endpoint = getClientEndpoint();

        auto generation = endpoint ? endpoint->currentGeneration(id) : 0;
        if (generation == 0) return makeSessionError(SessionErrc::WrongGeneration);

        auto entry = mImpl->find({id.toString(), generation});
        if (!entry) return makeSessionError(SessionErrc::NotFound);

        std::scoped_lock lock{entry->mutex};
        if (entry->state != Impl::State::ProtocolReady || !entry->session) {
            return makeSessionError(SessionErrc::WrongState);
        }

        if (auto activated = endpoint->activateSession(entry->session); !activated) {
            return activated;
        }
        entry->state = Impl::State::Active;

        entry->deadline.reset();
        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> ClientLoginIntegration::receive(
    NetworkIdentifier const& networkId,
    NetEventCallback&        callback,
    ControlPacket const&     packet
) {
    try {
        auto endpoint = getClientEndpoint();
        if (!endpoint) return makeSessionError(SessionErrc::TransportUnavailable);

        auto generation = endpoint->currentGeneration(networkId);
        if (generation == 0) return makeSessionError(SessionErrc::WrongGeneration);

        Impl::Key key{networkId.toString(), generation};

        auto entry = mImpl->find(key);
        if (!entry) return makeSessionError(SessionErrc::NotFound);

        Expected<> result;
        {
            std::scoped_lock lock{entry->mutex};
            result = [&]() -> Expected<> {
                if (!ll::getLeviConfig().targeted.protocol.enabled) {
                    return makeProtocolError(ProtocolErrc::UnexpectedMessage, "client protocol disabled");
                }

                if (entry->state == Impl::State::AwaitingServer) {
                    if (packet.getRuntimeId() != HelloRuntimeId
                        || static_cast<std::uint8_t>(packet.mSenderSubId)
                               != static_cast<std::uint8_t>(SubClientId::PrimaryClient)) {
                        return makeProtocolError(ProtocolErrc::UnexpectedMessage);
                    }

                    auto decoded = packet.decode(SupportedCoreProtocolVersions.max, Limits::MaxControlBody);
                    if (!decoded) return forwardError(decoded.error());

                    auto* hello = std::get_if<Hello>(&*decoded);
                    if (!hello || hello->header.handshakeId == 0 || hello->header.messageSequence != 1) {
                        return makeProtocolError(ProtocolErrc::UnexpectedMessage, "invalid initial hello");
                    }

                    auto limits   = client_login_detail::configuredLimits();
                    auto registry = PayloadRegistryAccess::snapshot(PayloadRegistry::getInstance());

                    NetworkIdentifierWithSubId peer{networkId, packet.mSenderSubId};

                    auto transport = std::make_shared<ClientTransport>(peer, generation);
                    auto session   = endpoint->openSession(
                        peer.id,
                        static_cast<std::uint8_t>(peer.subClientId),
                        generation,
                        hello->header.handshakeId,
                        registry,
                        transport,
                        limits
                    );
                    if (!session) return forwardError(session.error());

                    entry->session   = *session;
                    entry->transport = std::move(transport);
                    entry->handshake =
                        std::make_unique<HandshakeCoordinator>(EndpointRole::Client, *session, registry, limits);
                    entry->state = Impl::State::Negotiating;

                    entry->deadline =
                        std::chrono::steady_clock::now()
                        + std::chrono::seconds{ll::getLeviConfig().targeted.protocol.limits.handshakeTimeoutSeconds};

                    auto progress = entry->handshake->acceptServerHello(
                        std::move(*hello),
                        client_login_detail::randomNonce(),
                        packet.body().size()
                    );
                    if (!progress) {
                        return forwardError(progress.error());
                    }

                    return mImpl->send(entry, *progress);
                }

                if (entry->state != Impl::State::Negotiating || !entry->handshake) {
                    return makeProtocolError(ProtocolErrc::UnexpectedMessage);
                }

                auto decoded =
                    packet.decode(entry->handshake->coreProtocol(), entry->handshake->limits().maxControlBody);
                if (!decoded) return forwardError(decoded.error());

                auto progress = entry->handshake->receive(std::move(*decoded), packet.body().size());
                if (!progress) return forwardError(progress.error());

                HandshakeProgress outbound{std::move(progress->outbound), false};
                if (auto sent = mImpl->send(entry, outbound); !sent) return sent;
                if (progress->protocolReady) entry->state = Impl::State::ProtocolReady;

                return {};
            }();
        }

        if (!result) {
            auto error = classifyProtocolError(result.error(), ProtocolErrc::InvalidControlSchema);
            mImpl->fail(entry, callback, error);
        }

        return result;
    } catch (...) {
        auto endpoint = getClientEndpoint();

        auto generation = endpoint ? endpoint->currentGeneration(networkId) : 0;
        if (generation != 0) {
            mImpl->fail(mImpl->find({networkId.toString(), generation}), callback, ProtocolErrc::InternalFailure);
        }

        return makeExceptionError();
    }
}

Expected<> ClientLoginIntegration::receive(
    NetworkIdentifier const&           networkId,
    [[maybe_unused]] NetEventCallback& callback,
    ProtocolEnvelopePacket const&      packet
) {
    auto endpoint = getClientEndpoint();
    if (!endpoint) return makeSessionError(SessionErrc::TransportUnavailable);

    auto generation = endpoint->currentGeneration(networkId);
    if (generation == 0) return makeSessionError(SessionErrc::WrongGeneration);

    auto session = endpoint->findSession(networkId, static_cast<std::uint8_t>(packet.mSenderSubId), generation);

    auto result = PayloadDispatcher{}.dispatch(session, packet);
    if (!result) {
        auto error = classifyProtocolError(result.error(), ProtocolErrc::MalformedPayload);
        mImpl->fail(mImpl->find({networkId.toString(), generation}), callback, error);
    }

    return result;
}

ClientLoginIntegration& getClientLoginIntegration() {
    static ClientLoginIntegration integration;
    return integration;
}

} // namespace ll::protocol::detail

namespace ll::protocol::client {

Expected<> initializeLoginIntegration() { return detail::getClientLoginIntegration().initialize(); }

void shutdownLoginIntegration() { detail::getClientLoginIntegration().shutdown(); }

} // namespace ll::protocol::client
