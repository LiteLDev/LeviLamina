#include "ll/api/network/packet/PacketRegistrar.h"

#include <array>
#include <mutex>
#include <utility>

#include "ll/api/base/Containers.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/HashUtils.h"
#include "ll/core/network/PacketPeers.h"
#include "ll/core/network/RuntimePacket.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/PacketHandlerDispatcherInstance.h"
#include "mc/network/ServerNetworkHandler.h"

namespace ll::network {

static std::string ownerName(std::weak_ptr<mod::Mod> const& mod) {
    auto ptr = mod.lock();
    return ptr ? ptr->getName() : std::string{};
}

static constexpr std::array<PacketSide, 2> SingleSides{PacketSide::Server, PacketSide::Client};

static bool includes(PacketSide side, PacketSide single) {
    return (std::to_underlying(side) & std::to_underlying(single)) != 0;
}

static bool isServerSide(NetEventCallback const& callback) {
    auto handler = service::getServerNetworkHandler();
    return handler && static_cast<NetEventCallback const*>(handler.as_ptr()) == &callback;
}

struct PacketRegistrar::Impl {
    struct PacketEntry {
        PacketFactory factory;
        std::string   name;
        PacketSide    side;
        bool          optional;
        std::string   mod;
    };
    struct HandlerEntry {
        PacketHandler handler;
        std::string   mod;
    };
    using HandlerMap = ConcurrentDenseMap<PacketRuntimeId, HandlerEntry>;

    ConcurrentDenseMap<PacketRuntimeId, PacketEntry> packets;
    HandlerMap                                       serverHandlers;
    HandlerMap                                       clientHandlers;
    std::mutex                                       handlerMutex;

    HandlerMap& handlers(PacketSide side) { return side == PacketSide::Server ? serverHandlers : clientHandlers; }
};

PacketRegistrar::PacketRegistrar() : impl(std::make_unique<Impl>()) {
    mod::ModManagerRegistry::getInstance().executeOnModUnload([this](std::string_view name) { removeMod(name); });
}

PacketRegistrar::~PacketRegistrar() = default;

PacketRegistrar& PacketRegistrar::getInstance() {
    static PacketRegistrar instance;
    return instance;
}

void PacketRegistrar::removeMod(std::string_view name) {
    std::vector<PacketRuntimeId> ids;
    impl->packets.for_each([&](auto const& v) {
        if (v.second.mod == name) ids.push_back(v.first);
    });
    for (auto id : ids) {
        impl->packets.erase(id);
    }
    for (auto single : SingleSides) {
        ids.clear();
        {
            std::lock_guard lock{impl->handlerMutex};
            auto&           handlers = impl->handlers(single);
            handlers.for_each([&](auto const& v) {
                if (v.second.mod == name) ids.push_back(v.first);
            });
            for (auto id : ids) {
                handlers.erase(id);
            }
        }
        if (!ids.empty()) {
            PacketPeers::getInstance().onLocalChanged(single, ids, false);
        }
    }
}

bool PacketRegistrar::registerPacket(
    std::string_view        name,
    PacketRuntimeId         id,
    PacketFactory           factory,
    PacketSide              side,
    bool                    optional,
    std::weak_ptr<mod::Mod> mod
) {
    bool inserted = false;
    impl->packets.lazy_emplace_l(
        id,
        [](auto&) {},
        [&](auto const& ctor) {
            ctor(id, Impl::PacketEntry{std::move(factory), std::string{name}, side, optional, ownerName(mod)});
            inserted = true;
        }
    );
    return inserted;
}

bool PacketRegistrar::registerPacket(
    std::string_view        name,
    PacketRuntimeId         id,
    PacketFactory           factory,
    PacketHandler           handler,
    PacketSide              side,
    bool                    optional,
    std::weak_ptr<mod::Mod> mod
) {
    bool inserted = registerPacket(name, id, std::move(factory), side, optional, mod);
    if (inserted && handler) {
        registerHandler(name, id, std::move(handler), side, std::move(mod));
    }
    return inserted;
}

bool PacketRegistrar::registerHandler(
    std::string_view /*name*/,
    PacketRuntimeId         id,
    PacketHandler           handler,
    PacketSide              side,
    std::weak_ptr<mod::Mod> mod
) {
    if (!handler) {
        return false;
    }
    {
        std::lock_guard lock{impl->handlerMutex};
        for (auto single : SingleSides) {
            if (includes(side, single) && impl->handlers(single).contains(id)) {
                return false;
            }
        }
        auto owner = ownerName(mod);
        for (auto single : SingleSides) {
            if (includes(side, single)) {
                impl->handlers(single).emplace(id, Impl::HandlerEntry{handler, owner});
            }
        }
    }
    for (auto single : SingleSides) {
        if (includes(side, single)) {
            PacketPeers::getInstance().onLocalChanged(single, {id}, true);
        }
    }
    return true;
}

bool PacketRegistrar::unregisterPacket(PacketRuntimeId id) { return impl->packets.erase(id) > 0; }

bool PacketRegistrar::unregisterHandler(PacketRuntimeId id, PacketSide side) {
    bool removed = false;
    for (auto single : SingleSides) {
        bool erased = false;
        if (includes(side, single)) {
            std::lock_guard lock{impl->handlerMutex};
            erased = impl->handlers(single).erase(id) > 0;
        }
        if (erased) {
            PacketPeers::getInstance().onLocalChanged(single, {id}, false);
            removed = true;
        }
    }
    return removed;
}

std::unique_ptr<Packet> PacketRegistrar::createPacket(PacketRuntimeId runtimeId) {
    PacketFactory factory;
    impl->packets.if_contains(runtimeId, [&](auto const& v) { factory = v.second.factory; });
    return factory ? factory() : nullptr;
}

PacketRegistrar::PacketHandler PacketRegistrar::getHandler(PacketRuntimeId runtimeId, PacketSide side) {
    PacketHandler handler;
    impl->handlers(side).if_contains(runtimeId, [&](auto const& v) { handler = v.second.handler; });
    return handler;
}

std::vector<PacketRuntimeId> PacketRegistrar::getHandledPackets(PacketSide side) const {
    std::vector<PacketRuntimeId> ids;
    impl->handlers(side).for_each([&](auto const& v) { ids.push_back(v.first); });
    return ids;
}

std::vector<std::pair<PacketRuntimeId, std::string>> PacketRegistrar::getRequiredPackets(PacketSide side) const {
    std::vector<std::pair<PacketRuntimeId, std::string>> packets;
    impl->packets.for_each([&](auto const& v) {
        if (!v.second.optional && includes(v.second.side, side)) {
            packets.emplace_back(v.first, v.second.name);
        }
    });
    return packets;
}

} // namespace ll::network

template <>
class PacketHandlerDispatcherInstance<ll::network::RuntimePacket, false> : public IPacketHandlerDispatcher {
public:
    void handle(
        ::NetworkIdentifier const&   networkId,
        ::NetEventCallback&          netEvent,
        ::std::shared_ptr<::Packet>& pkt
    ) const override {
        auto& packet = static_cast<ll::network::RuntimePacket&>(*pkt);
        auto  inner  = packet.getPacket();
        if (!inner) {
            return;
        }
        auto side =
            ll::network::isServerSide(netEvent) ? ll::network::PacketSide::Server : ll::network::PacketSide::Client;
        if (auto handler = ll::network::PacketRegistrar::getInstance().getHandler(packet.getRuntimeId(), side)) {
            handler->handle(networkId, netEvent, side, *inner);
        }
    }
};

static PacketHandlerDispatcherInstance<ll::network::RuntimePacket, false> RuntimePacketPacketHandler;

LL_AUTO_STATIC_HOOK(
    RuntimePacketCreationHook,
    ll::memory::HookPriority::High,
    &MinecraftPackets::createPacket,
    ::std::shared_ptr<::Packet>,
    MinecraftPacketIds id
) {
    if (id == MinecraftPacketIds::LeviLaminaRuntimePacket) {
        auto packet      = std::make_shared<ll::network::RuntimePacket>();
        packet->mHandler = &RuntimePacketPacketHandler;
        return packet;
    }
    return origin(id);
}
