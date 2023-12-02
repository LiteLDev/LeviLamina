#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/actor/Actor.h"
#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {

LL_TYPED_INSTANCE_HOOK(
    PlayerAttackEventHook,
    HookPriority::Normal,
    Player,
    "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    bool,
    Actor&                  ac,
    ActorDamageCause const& cause
) {
    auto ev = PlayerAttackEvent(*this, ac, cause);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(ac, cause);
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerAttackEventEmitter : public Emitter<PlayerAttackEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerAttackEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAttackEventEmitter>();
}

} // namespace ll::event::inline player
