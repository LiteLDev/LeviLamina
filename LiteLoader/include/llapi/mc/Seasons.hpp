/**
 * @file  MC/Seasons.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Seasons.
 *
 */
class Seasons {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEASONS
public:
    class Seasons& operator=(class Seasons const &) = delete;
    Seasons(class Seasons const &) = delete;
    Seasons() = delete;
#endif

public:
    /**
     * @hash   -1440267823
     * @symbol ??0Seasons@@QEAA@AEAVDimension@@@Z
     */
    MCAPI Seasons(class Dimension &);
    /**
     * @hash   100759958
     * @symbol ?postProcess@Seasons@@QEAAXAEAVLevelChunk@@AEAVBlockSource@@AEBVChunkPos@@@Z
     */
    MCAPI void postProcess(class LevelChunk &, class BlockSource &, class ChunkPos const &);
    /**
     * @hash   931032061
     * @symbol ?tick@Seasons@@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   2057046300
     * @symbol ??1Seasons@@QEAA@XZ
     */
    MCAPI ~Seasons();

};