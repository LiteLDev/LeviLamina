#include "ll/core/network/PacketPeers.h"

#include <chrono>
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
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/NetworkStackLatencyPacket.h"
#include "mc/server/ServerPlayer.h"

namespace ll::network {

static constexpr std::chrono::steady_clock::time_point FenceTime{};

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

LL_TYPE_INSTANCE_HOOK(
    ServerLoginHook,
    HookPriority::Low,
    ServerNetworkHandler,
    &ServerNetworkHandler::sendLoginMessageLocal,
    void,
    NetworkIdentifier const& source,
    ConnectionRequest const& connectionRequest,
    ServerPlayer&            player
) {
    auto resume = [this, source] {
        auto joining = _getServerPlayer(source, SubClientId::PrimaryClient);
        auto client  = mClients->find(source);
        if (joining && client != mClients->end() && client->second && client->second->mPrimaryRequest) {
            origin(source, *client->second->mPrimaryRequest, *joining);
        }
    };
    PacketPeers::getInstance().holdLogin(source, player, std::move(resume));
}

LL_TYPE_INSTANCE_HOOK(
    ServerFenceHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::$handle,
    void,
    NetworkIdentifier const&         source,
    NetworkStackLatencyPacket const& packet
) {
    if (!PacketPeers::getInstance().releaseLogin(source, packet)) {
        origin(source, packet);
    }
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
    struct HeldLogin {
        std::function<void()> resume;
        std::string           locale;
    };

    ConcurrentDenseMap<NetworkIdentifier, SmallDenseSet<PacketRuntimeId>> clients;
    std::mutex                                                            heldMutex;
    DenseMap<NetworkIdentifier, HeldLogin>                                heldLogins;

    mutable std::shared_mutex      serverMutex;
    SmallDenseSet<PacketRuntimeId> server;
    bool                           registered{false};

    memory::HookRegistrar<ServerLoginHook, ServerFenceHook, ServerDisconnectHook> hooks;

    std::optional<HeldLogin> takeHeldLogin(NetworkIdentifier const& client) {
        std::lock_guard lock{heldMutex};
        auto            it = heldLogins.find(client);
        if (it == heldLogins.end()) {
            return std::nullopt;
        }
        auto held = std::move(it->second);
        heldLogins.erase(it);
        return held;
    }
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

void PacketPeers::holdLogin(NetworkIdentifier const& client, ServerPlayer& player, std::function<void()> resume) {
    removeClient(client);

    {
        std::lock_guard lock{impl->heldMutex};
        impl->heldLogins.insert_or_assign(client, Impl::HeldLogin{std::move(resume), player.getLocaleCode()});
    }

    RegisterPacket{PacketRegistrar::getInstance().getHandledPackets(PacketSide::Server), true}.sendToClient(
        client,
        SubClientId::PrimaryClient
    );
    NetworkStackLatencyPacket fence;
    fence.mCreateTime = FenceTime;
    fence.mFromServer = true;
    fence.sendToClient(client, SubClientId::PrimaryClient);
}

bool PacketPeers::releaseLogin(NetworkIdentifier const& client, NetworkStackLatencyPacket const& packet) {
    if (packet.mCreateTime.get() != FenceTime) {
        return false;
    }
    auto held = impl->takeHeldLogin(client);
    if (!held) {
        return false;
    }

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
        held->resume();
        return true;
    }
    removeClient(client);
    if (auto handler = service::getServerNetworkHandler()) {
        handler->disconnectClientWithMessage(
            client,
            SubClientId::PrimaryClient,
            Connection::DisconnectFailReason::Kicked,
            isLeviLamina
                ? "This server needs mods on the client that handle: {0}"_trl(held->locale, missing)
                : "This server needs LeviLamina and mods on the client that handle: {0}"_trl(held->locale, missing),
            std::nullopt
        );
    }
    return true;
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

void PacketPeers::removeClient(NetworkIdentifier const& client) {
    impl->clients.erase(client);
    impl->takeHeldLogin(client);
}

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
