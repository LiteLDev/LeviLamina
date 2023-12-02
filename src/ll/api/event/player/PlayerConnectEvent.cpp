#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkIdentifier.h"

#include "mc/network/ServerNetworkHandler.h"


namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
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

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerConnectEventEmitter : public Emitter<PlayerConnectEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerConnectEventHook> hook;

public:
    PlayerConnectEventEmitter()           = default;
    ~PlayerConnectEventEmitter() override = default;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerConnectEventEmitter>();
}
} // namespace ll::event::inline player
