#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/EventRefObjSerializer.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline player {

void PlayerConnectEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["networkIdentifier"] = serializeRefObj(networkIdentifier());
    nbt["connectionRequest"] = serializeRefObj(connectionRequest());
}

NetworkIdentifier const& PlayerConnectEvent::networkIdentifier() const { return mNetworkIdentifier; }
ConnectionRequest const& PlayerConnectEvent::connectionRequest() const { return mConnectionRequest; }

LL_TYPE_INSTANCE_HOOK(
    PlayerConnectEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    &ServerNetworkHandler::sendLoginMessageLocal,
    void,
    NetworkIdentifier const& ni,
    ConnectionRequest const& cr,
    ServerPlayer&            sp
) {
    auto event = PlayerConnectEvent{ni, cr, sp};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return;
    }
    origin(ni, cr, sp);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class PlayerConnectEventEmitter : public Emitter<emitterFactory, PlayerConnectEvent> {
    memory::HookRegistrar<PlayerConnectEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<PlayerConnectEventEmitter>(); }

} // namespace ll::event::inline player
