#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

namespace ll::event::inline player {

Actor&                  PlayerAttackEvent::target() const { return mTarget; }
ActorDamageCause const& PlayerAttackingEvent::cause() const { return mCause; }
float&                  PlayerAttackedEvent::damage() const { return mDamage; }


LL_TYPED_INSTANCE_HOOK(
    PlayerAttackingEventHook,
    HookPriority::Normal,
    Player,
    "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    bool,
    Actor&                  ac,
    ActorDamageCause const& cause
) {
    auto ev = PlayerAttackingEvent(*this, ac, cause);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return false;
    }
    return origin(ac, cause);
}

LL_TYPED_INSTANCE_HOOK(
    PlayerAttackedEventHook,
    HookPriority::Normal,
    Actor,
    &Actor::calculateAttackDamage,
    float,
    Actor& target
) {
    auto damage = origin(target);
    if (this->isType(ActorType::Player)) {
        PlayerAttackedEvent event(*(Player*)this, target, damage);
        EventBus::getInstance().publish(event);
        if (event.isCancelled()) {
            return 0;
        }
    }
    return damage;
}

static std::unique_ptr<EmitterBase> attackingEmitterFactory(ListenerBase&);
class PlayerAttackingEventEmitter : public Emitter<PlayerAttackingEvent, attackingEmitterFactory> {
    memory::HookAutoRegister<PlayerAttackingEventHook> hook;
};

static std::unique_ptr<EmitterBase> attackingEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAttackingEventEmitter>();
}

static std::unique_ptr<EmitterBase> attackedEmitterFactory(ListenerBase&);
class PlayerAttackedEventEmitter : public Emitter<PlayerAttackedEvent, attackedEmitterFactory> {
    memory::HookAutoRegister<PlayerAttackedEventHook> hook;
};

static std::unique_ptr<EmitterBase> attackedEmitterFactory(ListenerBase&) {
    return std::make_unique<PlayerAttackedEventEmitter>();
}

} // namespace ll::event::inline player
