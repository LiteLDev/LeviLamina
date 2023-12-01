#include "ll/api/event/player/PlayerRespawnEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::player {

LL_TYPED_INSTANCE_HOOK(PlayerRespawnEventHook, HookPriority::Normal, Player, "?respawn@Player@@UEAAXXZ", void) {
    auto ev = PlayerRespawnEvent(*this);
    EventBus::getInstance().publish(ev);
    origin();
}

class PlayerRespawnEventEmitter : public Emitter<PlayerRespawnEvent> {
public:
    PlayerRespawnEventEmitter() { PlayerRespawnEventHook::hook(); } // namespace ll::event::player
    ~PlayerRespawnEventEmitter() override { PlayerRespawnEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerRespawnEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerRespawnEventEmitter>();
}

} // namespace ll::event::player
