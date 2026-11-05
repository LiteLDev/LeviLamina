#include "ll/core/network/PacketPeers.h"

#include <mutex>
#include <shared_mutex>
#include <string_view>

#include "ll/api/base/Containers.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/network/packet/Packet.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/GamingStatus.h"

#include "mc/common/SubClientId.h"
#include "mc/deps/certificates/WebToken.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/connection/DisconnectFailReason.h"

namespace ll::network {

class RegisterPacket final : public PacketBase<RegisterPacket> {
public:
    static constexpr std::string_view CustomPacketId{"levilamina:register"};
    static constexpr bool             Optional{true};

    std::vector<PacketRuntimeId> packets;
    bool                         registered{};

    RegisterPacket() = default;

    RegisterPacket(std::vector<PacketRuntimeId> ids, bool isRegistered)
    : packets(std::move(ids)),
      registered(isRegistered) {}

    void write(BinaryStream& stream) const override {
        stream.writeBool(registered, nullptr, nullptr);
        stream.writeUnsignedVarInt64(packets.size(), nullptr, nullptr);
        for (auto id : packets) {
            stream.writeUnsignedInt64(id, nullptr, nullptr);
        }
    }

    Bedrock::Result<void> read(ReadOnlyBinaryStream& stream) override {
        auto isRegistered = stream.getBool();
        if (!isRegistered) {
            return nonstd::make_unexpected(isRegistered.error());
        }
        registered = *isRegistered;
        auto count = stream.getUnsignedVarInt64();
        if (!count) {
            return nonstd::make_unexpected(count.error());
        }
        packets.clear();
        for (uint64 i = 0; i < *count; i++) {
            auto id = stream.getUnsignedInt64();
            if (!id) {
                return nonstd::make_unexpected(id.error());
            }
            packets.push_back(*id);
        }
        return {};
    }
};

class RegisterHandler final : public PacketHandlerBase<RegisterHandler, RegisterPacket> {
public:
    void handlePacket(
        NetworkIdentifier const& source,
        NetEventCallback&,
        PacketSide            side,
        RegisterPacket const& packet
    ) const {
        if (side == PacketSide::Server) {
            PacketPeers::getInstance().updateClient(source, packet.packets, packet.registered);
        } else {
            PacketPeers::getInstance().updateServer(packet.packets, packet.registered);
        }
    }
};

static bool isLoggingIn(ServerNetworkHandler& handler, NetworkIdentifier const& client) {
    auto& clients = *handler.mClients;
    auto  it      = clients.find(client);
    return it != clients.end() && it->second
        && it->second->mLoginState == ServerNetworkHandler::Client::LoginState::AwaitingPlayerSpawn;
}

static std::string localeCodeOf(ConnectionRequest const& request) {
    if (!request.mRawToken->has_value()) {
        return {};
    }
    return request.mRawToken.get()->mDataInfo["LanguageCode"].asString({});
}

LL_TYPE_INSTANCE_HOOK(
    ServerAuthenticatedHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::_onClientAuthenticated,
    void,
    NetworkIdentifier const&        source,
    PlayerAuthenticationInfo const& playerInfo
) {
    origin(source, playerInfo);
    if (isLoggingIn(*this, source)) {
        PacketPeers::getInstance().beginLogin(source);
    }
}

LL_TYPE_INSTANCE_HOOK(
    ServerLoginPacketFilterHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$allowIncomingPacketId,
    IncomingPacketFilterResult,
    NetworkIdentifierWithSubId const& sender,
    MinecraftPacketIds                packetId,
    uint64                            packetSize
) {
    if (packetId == MinecraftPacketIds::LeviLaminaRuntimePacket
        && isLoggingIn(*thisFor<NetEventCallback>(), sender.id)) {
        return IncomingPacketFilterResult::Allowed;
    }
    return origin(sender, packetId, packetSize);
}

LL_TYPE_INSTANCE_HOOK(
    ServerPlayerCreationHook,
    HookPriority::High,
    ServerNetworkHandler,
    &ServerNetworkHandler::createNewPlayer,
    OwnerPtr<EntityContext>,
    NetworkIdentifier const&        source,
    ConnectionRequest const&        connectionRequest,
    PlayerAuthenticationInfo const& playerInfo
) {
    auto& peers = PacketPeers::getInstance();
    if (auto reason = peers.checkClient(source, localeCodeOf(connectionRequest))) {
        peers.removeClient(source);
        disconnectClientWithMessage(
            source,
            SubClientId::PrimaryClient,
            Connection::DisconnectFailReason::Kicked,
            *reason,
            std::nullopt
        );
        return OwnerStorageEntity{};
    }
    return origin(source, connectionRequest, playerInfo);
}

LL_TYPE_INSTANCE_HOOK(
    ServerDisconnectHook,
    HookPriority::Low,
    ServerNetworkHandler,
    &ServerNetworkHandler::$onDisconnect,
    void,
    NetworkIdentifier const&               id,
    Connection::DisconnectFailReason const discoReason,
    Connection::DisconnectionStage const   disconnectStage,
    std::string const&                     messageFromServer,
    std::string const&                     messageBodyOverride,
    bool                                   skipMessage,
    std::string const&                     telemetryOverride
) {
    origin(id, discoReason, disconnectStage, messageFromServer, messageBodyOverride, skipMessage, telemetryOverride);
    PacketPeers::getInstance().removeClient(id);
}

struct PacketPeers::Impl {
    ConcurrentDenseMap<NetworkIdentifier, SmallDenseSet<PacketRuntimeId>> clients;

    mutable std::shared_mutex      serverMutex;
    SmallDenseSet<PacketRuntimeId> server;
    bool                           registered{false};

    memory::HookRegistrar<
        ServerAuthenticatedHook,
        ServerLoginPacketFilterHook,
        ServerPlayerCreationHook,
        ServerDisconnectHook>
        hooks;
};

PacketPeers::PacketPeers() : impl(std::make_unique<Impl>()) {}

PacketPeers::~PacketPeers() = default;

PacketPeers& PacketPeers::getInstance() {
    static PacketPeers instance;
    return instance;
}

void PacketPeers::onLocalChanged(PacketSide side, std::vector<PacketRuntimeId> const& packets, bool handled) {
    if (getGamingStatus() != GamingStatus::Running) {
        return;
    }
    RegisterPacket packet{packets, handled};
    if (side == PacketSide::Server) {
        std::vector<NetworkIdentifier> clients;
        impl->clients.for_each([&](auto const& entry) { clients.push_back(entry.first); });
        for (auto const& client : clients) {
            packet.sendToClient(client, SubClientId::PrimaryClient);
        }
        return;
    }
    std::shared_lock lock{impl->serverMutex};
    if (impl->registered) {
        packet.sendToServer();
    }
}

bool PacketPeers::clientHandles(NetworkIdentifier const& client, PacketRuntimeId id) const {
    bool result = false;
    impl->clients.if_contains(client, [&](auto const& entry) { result = entry.second.contains(id); });
    return result;
}

bool PacketPeers::serverHandles(PacketRuntimeId id) const {
    std::shared_lock lock{impl->serverMutex};
    return impl->server.contains(id);
}

void PacketPeers::beginLogin(NetworkIdentifier const& client) {
    removeClient(client);
    RegisterPacket{PacketRegistrar::getInstance().getHandledPackets(PacketSide::Server), true}.sendToClient(
        client,
        SubClientId::PrimaryClient
    );
}

bool PacketPeers::acceptsFromClient(NetworkIdentifier const& client, PacketRuntimeId id) {
    if (id == getPacketRuntimeId<RegisterPacket>) {
        return true;
    }
    auto handler = service::getServerNetworkHandler();
    return !handler || !isLoggingIn(*handler, client);
}

std::optional<std::string> PacketPeers::checkClient(NetworkIdentifier const& client, std::string_view locale) const {
    auto                     required = PacketRegistrar::getInstance().getRequiredPackets(PacketSide::Client);
    std::vector<std::string> missing;
    bool                     isLeviLamina = impl->clients.if_contains(client, [&](auto const& entry) {
        for (auto const& [id, name] : required) {
            if (!entry.second.contains(id)) {
                missing.push_back(name);
            }
        }
    });
    if (!isLeviLamina) {
        for (auto& [id, name] : required) {
            missing.push_back(std::move(name));
        }
    }

    if (missing.empty()) {
        return std::nullopt;
    }
    if (isLeviLamina) {
        return "This server needs mods on the client that handle: {0}"_trl(locale, missing);
    }
    return "This server needs LeviLamina and mods on the client that handle: {0}"_trl(locale, missing);
}

void PacketPeers::updateClient(
    NetworkIdentifier const&            client,
    std::vector<PacketRuntimeId> const& packets,
    bool                                handled
) {
    impl->clients.lazy_emplace_l(
        client,
        [&](auto& entry) {
            for (auto id : packets) {
                if (handled) {
                    entry.second.insert(id);
                } else {
                    entry.second.erase(id);
                }
            }
        },
        [&](auto const& ctor) {
            ctor(
                client,
                handled ? SmallDenseSet<PacketRuntimeId>{packets.begin(), packets.end()}
                        : SmallDenseSet<PacketRuntimeId>{}
            );
        }
    );
}

void PacketPeers::removeClient(NetworkIdentifier const& client) { impl->clients.erase(client); }

void PacketPeers::updateServer(std::vector<PacketRuntimeId> const& packets, bool handled) {
    bool answer;
    {
        std::unique_lock lock{impl->serverMutex};
        for (auto id : packets) {
            if (handled) {
                impl->server.insert(id);
            } else {
                impl->server.erase(id);
            }
        }
        answer = handled && !impl->registered;
        if (answer) {
            impl->registered = true;
        }
    }
    if (answer) {
        RegisterPacket{PacketRegistrar::getInstance().getHandledPackets(PacketSide::Client), true}.sendToServer();
    }
}

void PacketPeers::removeServer() {
    std::unique_lock lock{impl->serverMutex};
    impl->server.clear();
    impl->registered = false;
}

std::optional<std::string> PacketPeers::checkServer() const {
    auto                     required = PacketRegistrar::getInstance().getRequiredPackets(PacketSide::Server);
    std::vector<std::string> missing;
    std::shared_lock         lock{impl->serverMutex};
    for (auto& [id, name] : required) {
        if (!impl->server.contains(id)) {
            missing.push_back(std::move(name));
        }
    }
    if (missing.empty()) {
        return std::nullopt;
    }
    if (!impl->registered) {
        return "This client has mods that need LeviLamina on the server to handle: {0}"_tr(missing);
    }
    return "The server lacks mods that handle: {0}"_tr(missing);
}

} // namespace ll::network
