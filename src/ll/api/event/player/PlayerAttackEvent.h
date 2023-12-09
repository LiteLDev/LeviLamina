#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerAttackEvent : public Cancellable<PlayerEvent> {
    Actor& mTarget;

protected:
    constexpr PlayerAttackEvent(Player& source, Actor& target) : Cancellable(source), mTarget(target) {}

public:
    LLNDAPI Actor& target() const;
};

class PlayerAttackingEvent : public PlayerAttackEvent {
    ActorDamageCause const& mCause;

public:
    constexpr PlayerAttackingEvent(Player& source, Actor& target, ActorDamageCause const& cause)
    : PlayerAttackEvent(source, target),
      mCause(cause) {}

    LLNDAPI ActorDamageCause const& cause() const;
};

class PlayerAttackedEvent : public PlayerAttackEvent {
    float& mDamage;

public:
    constexpr PlayerAttackedEvent(Player& source, Actor& target, float& damage)
    : PlayerAttackEvent(source, target),
      mDamage(damage) {}

    LLNDAPI float& damage() const;
};
} // namespace ll::event::inline player
