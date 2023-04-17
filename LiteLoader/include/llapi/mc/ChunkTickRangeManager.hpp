/**
 * @file  ChunkTickRangeManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ChunkTickRangeManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKTICKRANGEMANAGER
public:
    class ChunkTickRangeManager& operator=(class ChunkTickRangeManager const &) = delete;
    ChunkTickRangeManager(class ChunkTickRangeManager const &) = delete;
    ChunkTickRangeManager() = delete;
#endif

public:
    /**
     * @symbol ??0ChunkTickRangeManager\@\@QEAA\@II\@Z
     */
    MCAPI ChunkTickRangeManager(unsigned int, unsigned int);
    /**
     * @symbol ?getAdjustedChunkTickRange\@ChunkTickRangeManager\@\@QEAAIAEBVLevelSettings\@\@\@Z
     */
    MCAPI unsigned int getAdjustedChunkTickRange(class LevelSettings const &);
    /**
     * @symbol ?isChunkInTickRange\@ChunkTickRangeManager\@\@QEBA_NAEBVChunkPos\@\@AEBVDimension\@\@_NMHH\@Z
     */
    MCAPI bool isChunkInTickRange(class ChunkPos const &, class Dimension const &, bool, float, int, int) const;
    /**
     * @symbol ?isChunkInTickRange\@ChunkTickRangeManager\@\@QEBA_NAEBVLevelChunk\@\@V?$optional\@H\@std\@\@\@Z
     */
    MCAPI bool isChunkInTickRange(class LevelChunk const &, class std::optional<int>) const;
    /**
     * @symbol ?setChunkTickRange\@ChunkTickRangeManager\@\@QEAAXI\@Z
     */
    MCAPI void setChunkTickRange(unsigned int);

};
