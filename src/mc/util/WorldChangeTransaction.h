#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldChangeTransaction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDCHANGETRANSACTION
public:
    WorldChangeTransaction& operator=(WorldChangeTransaction const&) = delete;
    WorldChangeTransaction(WorldChangeTransaction const&)            = delete;
    WorldChangeTransaction()                                         = delete;
#endif

public:
    /**
     * @symbol ??0WorldChangeTransaction\@\@QEAA\@AEAVIBlockWorldGenAPI\@\@\@Z
     */
    MCAPI WorldChangeTransaction(class IBlockWorldGenAPI&);
    /**
     * @symbol ?apply\@WorldChangeTransaction\@\@QEBA_NXZ
     */
    MCAPI bool apply() const;
    /**
     * @symbol ?getBlock\@WorldChangeTransaction\@\@QEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const& getBlock(class BlockPos const&) const;
    /**
     * @symbol ?setBlock\@WorldChangeTransaction\@\@QEAAXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCAPI void setBlock(class BlockPos const&, class Block const&, int);
    /**
     * @symbol ??1WorldChangeTransaction\@\@QEAA\@XZ
     */
    MCAPI ~WorldChangeTransaction();
};
