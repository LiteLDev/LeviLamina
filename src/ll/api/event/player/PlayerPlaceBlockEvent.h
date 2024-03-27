#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

#include "mc/world/actor/player/Player.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

namespace ll::event::inline player {

class PlayerPlaceBlockEvent : public PlayerRightClickEvent {
    BlockPos const& mPos;

protected:
    constexpr explicit PlayerPlaceBlockEvent(Player& player, BlockPos const& pos)
    : PlayerRightClickEvent(player),
      mPos(pos) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI BlockPos const& pos() const;
};

class PlayerPlacingBlockEvent final : public Cancellable<PlayerPlaceBlockEvent> {
    uchar const& mFace;

public:
    constexpr explicit PlayerPlacingBlockEvent(Player& player, BlockPos const& pos, uchar const& face)
    : Cancellable(player, pos),
      mFace(face) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI uchar const& face() const;
};

class PlayerPlacedBlockEvent final : public PlayerPlaceBlockEvent {
    Block const& mPlacedBlock;

public:
    constexpr explicit PlayerPlacedBlockEvent(Player& player, BlockPos const& pos, Block const& placedBlock)
    : PlayerPlaceBlockEvent(player, pos),
      mPlacedBlock(placedBlock) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI Block const& placedBlock() const;
};
} // namespace ll::event::inline player
