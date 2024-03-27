#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

#include "mc/world/level/BlockPos.h"

namespace ll::event::inline player {

class PlayerInteractBlockEvent final : public Cancellable<PlayerEvent> {
    BlockPos const& mPos;

public:
    constexpr PlayerInteractBlockEvent(Player& player, BlockPos const& pos) : Cancellable(player), mPos(pos) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI BlockPos const& pos() const;
};
} // namespace ll::event::inline player
