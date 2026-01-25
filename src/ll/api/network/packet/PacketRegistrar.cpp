#include "ll/api/network/packet/PacketRegistrar.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/network/packet/runtime/RuntimePacket.h"
#include "ll/api/utils/HashUtils.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/MinecraftPackets.h"
#include "mc/network/PacketHandlerDispatcherInstance.h"

namespace ll::network {

PacketRegistrar& PacketRegistrar::getInstance() {
    static PacketRegistrar instance;
    return instance;
}

bool PacketRegistrar::registerPacket(std::string_view name, PacketFactory factory) {
    uint64 hash     = ll::hash_utils::doHash(name);
    bool   inserted = false;
    mPackets.lazy_emplace_l(
        hash,
        [](auto&) {},
        [&](auto const& ctor) {
            ctor(hash, std::move(factory));
            inserted = true;
        }
    );
    return inserted;
}

bool PacketRegistrar::registerPacket(std::string_view name, PacketFactory factory, PacketHandler handler) {
    uint64 hash     = ll::hash_utils::doHash(name);
    bool   inserted = false;

    if (mHandlers.contains(hash)) {
        return false;
    }

    mPackets.lazy_emplace_l(
        hash,
        [](auto&) {},
        [&](auto const& ctor) {
            ctor(hash, std::move(factory));
            inserted = true;
        }
    );

    if (inserted && handler) {
        mHandlers.try_emplace(hash, std::move(handler));
    }
    return inserted;
}

bool PacketRegistrar::registerHandler(std::string_view name, PacketHandler handler) {
    uint64 hash     = ll::hash_utils::doHash(name);
    bool   inserted = false;
    mHandlers.lazy_emplace_l(
        hash,
        [](auto&) {},
        [&](auto const& ctor) {
            ctor(hash, std::move(handler));
            inserted = true;
        }
    );
    return inserted;
}

std::shared_ptr<Packet> PacketRegistrar::createPacket(uint64 runtimeId) {
    PacketFactory factory;
    mPackets.if_contains(runtimeId, [&](auto const& v) { factory = v.second; });
    return factory ? factory() : nullptr;
}

PacketRegistrar::PacketHandler PacketRegistrar::getHandler(uint64 runtimeId) {
    PacketHandler handler;
    mHandlers.if_contains(runtimeId, [&](auto const& v) { handler = v.second; });
    return handler;
}

} // namespace ll::network

template <>
class PacketHandlerDispatcherInstance<ll::network::RuntimePacket, false> : public IPacketHandlerDispatcher {
public:
    virtual void handle(
        ::NetworkIdentifier const&   networkId,
        ::NetEventCallback&          netEvent,
        ::std::shared_ptr<::Packet>& pkt
    ) const override {
        auto& packet = (std::shared_ptr<ll::network::RuntimePacket>&)pkt;
        if (!packet->mPacket) {
            return;
        }

        auto handler = ll::network::PacketRegistrar::getInstance().getHandler(packet->mRuntimeId);
        if (handler) {
            handler->handle(networkId, netEvent, *packet->mPacket);
            return;
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
    if (id == MinecraftPacketIds::RuntimePacket) {
        auto packet      = std::make_shared<ll::network::RuntimePacket>();
        packet->mHandler = &RuntimePacketPacketHandler;
        return packet;
    }
    return origin(id);
}
