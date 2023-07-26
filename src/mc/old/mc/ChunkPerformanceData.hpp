/**
 * @file  ChunkPerformanceData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ChunkPerformanceData.
 *
 */
struct ChunkPerformanceData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPERFORMANCEDATA
public:
    struct ChunkPerformanceData& operator=(struct ChunkPerformanceData const &) = delete;
    ChunkPerformanceData(struct ChunkPerformanceData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ChunkPerformanceData\@\@QEAA\@XZ
     */
    MCAPI ChunkPerformanceData();
    /**
     * @symbol  ?recordLoadedChunk\@ChunkPerformanceData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const &);
    /**
     * @symbol  ?resetAll\@ChunkPerformanceData\@\@QEAAXXZ
     */
    MCAPI void resetAll();

};