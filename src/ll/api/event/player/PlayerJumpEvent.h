#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerJumpEvent final : public PlayerEvent {
    Vec3 const mFromPosition;
    Vec3 const mToPosition;

public:
    constexpr explicit PlayerJumpEvent(Player& player, Vec3 const& fromPos, Vec3 const& toPos)
    : PlayerEvent(player),
      mFromPosition(fromPos),
      mToPosition(toPos) {}

    LLAPI void serialize(CompoundTag& nbt) const override;

    LLNDAPI Vec3 const& fromPosition();
    LLNDAPI Vec3 const& toPosition();
};

} // namespace ll::event::inline player
