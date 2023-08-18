#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/BlockPos.h"

class BlockInstance {
public:
    BlockPos                          pos;
    AutomaticID<class Dimension, int> dimID;

    LLAPI BlockInstance();
    inline BlockInstance(BlockPos const& pos, int dimID) : pos(pos), dimID(dimID){};

    LLNDAPI class BlockSource& getBlockSource() const;

    LLNDAPI bool hasBlock() const;

    LLNDAPI class Block const& getBlock(int layer = 0) const;

    [[nodiscard]] constexpr class Block const& getExtraBlock() const { return getBlock(1); };

    LLNDAPI optional_ref<class BlockActor const> getBlockEntity() const;

    LLNDAPI operator bool() const; // NOLINT

    LLNDAPI bool operator==(BlockInstance const& b) const;

    LLAPI static BlockInstance const Null;
};