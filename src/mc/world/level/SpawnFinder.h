#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnFinder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNFINDER
public:
    SpawnFinder& operator=(SpawnFinder const&) = delete;
    SpawnFinder(SpawnFinder const&)            = delete;
    SpawnFinder()                              = delete;
#endif

public:
    /**
     * @symbol
     * ?findStandupPosition\@SpawnFinder\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    findStandupPosition(class BlockPos const&, class BlockSource const&);
    /**
     * @symbol ?isStandupPosition\@SpawnFinder\@\@SA_NAEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI static bool isStandupPosition(class BlockPos const&, class BlockSource const&);
};
