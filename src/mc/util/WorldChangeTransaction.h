#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldChangeTransaction {
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
