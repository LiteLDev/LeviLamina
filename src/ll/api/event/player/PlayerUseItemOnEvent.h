#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerUseItemEvent.h"

#include "mc/math/Vec3.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

namespace ll::event::inline player {

class PlayerUseItemOnEvent : public PlayerUseItemEvent {
    BlockPos const& mBlockPos;
    uchar const&    mFace;
    Vec3 const&     mClickPos;
    Block const&    mBlock;

public:
    constexpr PlayerUseItemOnEvent(
        Player&         player,
        ItemStack&      item,
        BlockPos const& blockPos,
        uchar const&    face,
        Vec3 const&     clickPos,
        Block const&    block
    )
    : PlayerUseItemEvent(player, item),
      mBlockPos(blockPos),
      mFace(face),
      mClickPos(clickPos),
      mBlock(block) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI BlockPos const& blockPos() const;
    LLNDAPI uchar const&    face() const;
    LLNDAPI Vec3 const&     clickPos() const;
    LLNDAPI Block const&    block() const;
};
} // namespace ll::event::inline player
