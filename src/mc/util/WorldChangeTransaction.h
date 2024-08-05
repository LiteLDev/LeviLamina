#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/IBlockWorldGenAPI.h"
#include "mc/world/level/block/Block.h"

class WorldChangeTransaction {
public:
    struct BlockChange {
        int          mUpdateFlags;
        Block const* mOldBlock;
        Block const* mNewBlock;
    };

    struct Data {
        std::unordered_map<BlockPos, BlockChange> mChanges;
    };

public:
    IBlockWorldGenAPI&    mTarget; // this+0x0
    std::unique_ptr<Data> mData;   // this+0x8

public:
    // prevent constructor by default
    WorldChangeTransaction& operator=(WorldChangeTransaction const&);
    WorldChangeTransaction(WorldChangeTransaction const&);
    WorldChangeTransaction();

public:
    // NOLINTBEGIN
    MCAPI explicit WorldChangeTransaction(class IBlockWorldGenAPI& target);

    MCAPI bool apply() const;

    MCAPI class Block const& getBlock(class BlockPos const& pos) const;

    MCAPI void setBlock(class BlockPos const& pos, class Block const& newBlock, int updateFlags);

    MCAPI ~WorldChangeTransaction();

    // NOLINTEND
};
