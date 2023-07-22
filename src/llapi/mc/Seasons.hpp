/**
 * @file  Seasons.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0Seasons\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI Seasons(class Dimension &);
    /**
     * @symbol  ?postProcess\@Seasons\@\@QEAAXAEAVLevelChunk\@\@AEAVBlockSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void postProcess(class LevelChunk &, class BlockSource &, class ChunkPos const &);
    /**
     * @symbol  ?tick\@Seasons\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @symbol  ??1Seasons\@\@QEAA\@XZ
     */
    MCAPI ~Seasons();

};