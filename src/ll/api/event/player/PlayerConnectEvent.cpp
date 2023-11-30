#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ServerNetworkHandler.h"


namespace ll::event::player {

LL_TYPED_INSTANCE_HOOK(
    PlayerConnectEventHook,
    HookPriority::Normal,
    ServerNetworkHandler,
    "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVConnectionRequest@@AEAVServerPlayer@@"
    "@Z",
    void,
    const NetworkIdentifier& ni,
    const ConnectionRequest& cr,
    const ServerPlayer&      sp
) {
    auto event = PlayerConnectEvent(sp);
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return;
    }
    origin(ni, cr, sp);
}

class PlayerConnectEventEmitter : public Emitter<PlayerConnectEvent> {
public:
    PlayerConnectEventEmitter() { PlayerConnectEventHook::hook(); }
    ~PlayerConnectEventEmitter() override { PlayerConnectEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerConnectEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerConnectEventEmitter>();
}
} // namespace ll::event::player
