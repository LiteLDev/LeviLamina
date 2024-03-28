#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

namespace ll::event::inline player {

class PlayerAttackEvent final : public Cancellable<PlayerLeftClickEvent> {
    Actor&                  mTarget;
    ActorDamageCause const& mCause;

public:
    constexpr PlayerAttackEvent(Player& source, Actor& target, ActorDamageCause const& cause)
    : Cancellable(source),
      mTarget(target),
      mCause(cause) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Actor&                  target() const;
    LLNDAPI ActorDamageCause const& cause() const;
};
} // namespace ll::event::inline player
