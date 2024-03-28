#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerClickEvent.h"

#include "mc/math/Vec3.h"
#include "mc/world/item/registry/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

namespace ll::event::inline player {

class PlayerUseItemOnEvent final : public Cancellable<PlayerRightClickEvent> {
    ItemStack&                mItem;
    BlockPos const&           mBlockPos;
    uchar const&              mFace;
    Vec3 const&               mClickPos;
    optional_ref<Block const> mBlock;

public:
    constexpr PlayerUseItemOnEvent(
        Player&                   player,
        ItemStack&                item,
        BlockPos const&           blockPos,
        uchar const&              face,
        Vec3 const&               clickPos,
        optional_ref<Block const> block
    )
    : Cancellable(player),
      mItem(item),
      mBlockPos(blockPos),
      mFace(face),
      mClickPos(clickPos),
      mBlock(block) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ItemStack&      item() const;
    LLNDAPI BlockPos const& blockPos() const;
    LLNDAPI uchar const&    face() const;
    LLNDAPI Vec3 const&     clickPos() const;
    LLNDAPI optional_ref<Block const> block() const;
};
} // namespace ll::event::inline player
