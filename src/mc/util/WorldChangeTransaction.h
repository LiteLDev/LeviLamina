#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldChangeTransaction {

public:
    // prevent constructor by default
    WorldChangeTransaction& operator=(WorldChangeTransaction const&) = delete;
    WorldChangeTransaction(WorldChangeTransaction const&)            = delete;
    WorldChangeTransaction()                                         = delete;

public:
    /**
     * @symbol ??0WorldChangeTransaction\@\@QEAA\@AEAVIBlockWorldGenAPI\@\@\@Z
     */
    MCAPI WorldChangeTransaction(class IBlockWorldGenAPI&); // NOLINT
    /**
     * @symbol ?apply\@WorldChangeTransaction\@\@QEBA_NXZ
     */
    MCAPI bool apply() const; // NOLINT
    /**
     * @symbol ?getBlock\@WorldChangeTransaction\@\@QEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const& getBlock(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?setBlock\@WorldChangeTransaction\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI void setBlock(class BlockPos const&, class Block const&, int); // NOLINT
    /**
     * @symbol ??1WorldChangeTransaction\@\@QEAA\@XZ
     */
    MCAPI ~WorldChangeTransaction(); // NOLINT
};
