#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

#include "mc/world/actor/player/Player.h"
#include "mc/world/level/BlockPos.h"

namespace ll::event::inline player {

class PlayerDestroyBlockEvent final : public Cancellable<PlayerLeftClickEvent> {
    BlockPos const& mPos;

public:
    constexpr PlayerDestroyBlockEvent(Player& player, BlockPos const& pos) : Cancellable(player), mPos(pos) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI BlockPos const& pos() const;
};
} // namespace ll::event::inline player
