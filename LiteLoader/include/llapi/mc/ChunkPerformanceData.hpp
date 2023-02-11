/**
 * @file  ChunkPerformanceData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1347772919
     * @symbol  ??0ChunkPerformanceData\@\@QEAA\@XZ
     */
    MCAPI ChunkPerformanceData();
    /**
     * @hash   -2137322926
     * @symbol  ?recordLoadedChunk\@ChunkPerformanceData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const &);
    /**
     * @hash   1437153909
     * @symbol  ?resetAll\@ChunkPerformanceData\@\@QEAAXXZ
     */
    MCAPI void resetAll();

};