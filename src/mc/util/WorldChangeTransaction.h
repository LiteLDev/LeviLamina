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
    // symbol: ??0WorldChangeTransaction@@QEAA@AEAVIBlockWorldGenAPI@@@Z
    MCAPI explicit WorldChangeTransaction(class IBlockWorldGenAPI&);

    // symbol: ?apply@WorldChangeTransaction@@QEBA_NXZ
    MCAPI bool apply() const;

    // symbol: ?getBlock@WorldChangeTransaction@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI class Block const& getBlock(class BlockPos const& pos) const;

    // symbol: ?setBlock@WorldChangeTransaction@@QEAAXAEBVBlockPos@@AEBVBlock@@H@Z
    MCAPI void setBlock(class BlockPos const& pos, class Block const& newBlock, int updateFlags);

    // symbol: ??1WorldChangeTransaction@@QEAA@XZ
    MCAPI ~WorldChangeTransaction();

    // NOLINTEND
};
