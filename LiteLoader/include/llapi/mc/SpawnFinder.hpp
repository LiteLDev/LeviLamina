/**
 * @file  MC/SpawnFinder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnFinder.
 *
 */
class SpawnFinder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNFINDER
public:
    class SpawnFinder& operator=(class SpawnFinder const &) = delete;
    SpawnFinder(class SpawnFinder const &) = delete;
    SpawnFinder() = delete;
#endif

public:
    /**
     * @hash   1836571293
     * @symbol ?findStandupPosition@SpawnFinder@@SA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEBVBlockSource@@@Z
     */
    MCAPI static class std::optional<class BlockPos> findStandupPosition(class BlockPos const &, class BlockSource const &);
    /**
     * @hash   2096005258
     * @symbol ?isStandupPosition@SpawnFinder@@SA_NAEBVBlockPos@@AEBVBlockSource@@@Z
     */
    MCAPI static bool isStandupPosition(class BlockPos const &, class BlockSource const &);

};