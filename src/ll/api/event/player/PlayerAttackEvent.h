#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

namespace ll::event::inline player {

class PlayerAttackEvent final : public Cancellable<PlayerLeftClickEvent> {
    Actor&                                         mTarget;
    ::SharedTypes::Legacy::ActorDamageCause const& mCause;

public:
    constexpr PlayerAttackEvent(Player& source, Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause)
    : Cancellable(source),
      mTarget(target),
      mCause(cause) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Actor&                                         target() const;
    LLNDAPI ::SharedTypes::Legacy::ActorDamageCause const& cause() const;
};
} // namespace ll::event::inline player
