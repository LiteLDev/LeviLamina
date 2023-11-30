#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/network/ConnectionRequest.h"
#include "mc/network/NetworkIdentifier.h"

#include "mc/network/ServerNetworkHandler.h"


namespace ll::event::player {

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

class PlayerConnectEventEmitter : public Emitter<PlayerConnectEvent> {
public:
    PlayerConnectEventEmitter() { PlayerConnectEventHook::hook(); }
    ~PlayerConnectEventEmitter() override { PlayerConnectEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerConnectEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerConnectEventEmitter>();
}
} // namespace ll::event::player
