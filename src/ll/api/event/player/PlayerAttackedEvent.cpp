#include "ll/api/event/player/PlayerAttackedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/actor/Actor.h"
#include "mc/world/actor/player/Player.h"

namespace ll::event::inline player {
LL_TYPED_INSTANCE_HOOK(
    PlayerAttackedEventHook,
    HookPriority::Normal,
    Actor,
    &Actor::calculateAttackDamage,
    float,
    Actor& targetAc
) {
    auto damage = origin(targetAc);
    if (this->isType(ActorType::Player)) {
        PlayerAttackedEvent event(*(Player*)this, targetAc, damage);
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return 0;
        }
        return event.damage;
    }
    return damage;
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class PlayerAttackedEventEmitter : public Emitter<PlayerAttackedEvent, emitterFactory> {
    memory::HookAutoRegister<PlayerAttackedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAttackedEventEmitter>();
}

} // namespace ll::event::inline player
