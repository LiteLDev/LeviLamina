#include "ll/api/event/player/PlayerDieEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"


#include "mc/world/actor/player/Player.h"

namespace ll::event::player {

LL_TYPED_INSTANCE_HOOK(
    PlayerDieEventHook,
    HookPriority::Normal,
    Player,
    "?die@Player@@UEAAXAEBVActorDamageSource@@@Z",
    void,
    ActorDamageSource const& source
) {
    auto ev = PlayerDieEvent(*this, source);
    EventBus::getInstance().publish(ev);
    origin(source);
}

class PlayerDieEventEmitter : public Emitter<PlayerDieEvent> {
public:
    PlayerDieEventEmitter() { PlayerDieEventHook::hook(); } // namespace ll::event::player
    ~PlayerDieEventEmitter() override { PlayerDieEventHook::unhook(); }
};

std::unique_ptr<EmitterBase> PlayerDieEvent::emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerDieEventEmitter>();
}

} // namespace ll::event::player
