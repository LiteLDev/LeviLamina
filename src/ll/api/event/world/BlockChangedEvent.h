#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/world/WorldEvent.h"

#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

namespace ll::event::inline world {

class BlockChangedEvent : public Cancellable<WorldEvent> {
    Block const&    mPreviousBlock;
    Block const&    mNewBlock;
    BlockPos const& mBlockPos;

public:
    constexpr BlockChangedEvent(
        BlockSource&    blockSource,
        Block const&    previousBlock,
        Block const&    newBlock,
        BlockPos const& blockPos
    )
    : Cancellable(blockSource),
      mPreviousBlock(previousBlock),
      mNewBlock(newBlock),
      mBlockPos(blockPos) {}

    void serialize(CompoundTag&) const override;

    LLNDAPI Block const&    previousBlock() const;
    LLNDAPI Block const&    newBlock() const;
    LLNDAPI BlockPos const& blockPos() const;
};
} // namespace ll::event::inline world
