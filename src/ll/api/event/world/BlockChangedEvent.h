#pragma once

#include "ll/api/event/world/WorldEvent.h"

#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

namespace ll::event::inline world {

class BlockChangedEvent final : public WorldEvent {
    uint const&     mLayer;
    Block const&    mPreviousBlock;
    Block const&    mNewBlock;
    BlockPos const& mPos;

public:
    constexpr BlockChangedEvent(
        BlockSource&    blockSource,
        uint const&     layer,
        Block const&    previousBlock,
        Block const&    newBlock,
        BlockPos const& pos
    )
    : WorldEvent(blockSource),
      mLayer(layer),
      mPreviousBlock(previousBlock),
      mNewBlock(newBlock),
      mPos(pos) {}

    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI uint const&     layer() const;
    LLNDAPI Block const&    previousBlock() const;
    LLNDAPI Block const&    newBlock() const;
    LLNDAPI BlockPos const& pos() const;
};
} // namespace ll::event::inline world
