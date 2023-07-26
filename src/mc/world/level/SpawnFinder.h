#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnFinder {

public:
    // prevent constructor by default
    SpawnFinder& operator=(SpawnFinder const&) = delete;
    SpawnFinder(SpawnFinder const&)            = delete;
    SpawnFinder()                              = delete;

public:
    /**
     * @symbol
     * ?findStandupPosition\@SpawnFinder\@\@SA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI static class std::optional<class BlockPos>
    findStandupPosition(class BlockPos const&, class BlockSource const&); // NOLINT
    /**
     * @symbol ?isStandupPosition\@SpawnFinder\@\@SA_NAEBVBlockPos\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI static bool isStandupPosition(class BlockPos const&, class BlockSource const&); // NOLINT
};
