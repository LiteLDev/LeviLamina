#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkPerformanceData {
public:
    // ChunkPerformanceData inner types declare
    // clang-format off
    class AtomicMemoryAccumulator;
    // clang-format on

    // ChunkPerformanceData inner types define
    class AtomicMemoryAccumulator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPERFORMANCEDATA_ATOMICMEMORYACCUMULATOR
    public:
        AtomicMemoryAccumulator& operator=(AtomicMemoryAccumulator const&) = delete;
        AtomicMemoryAccumulator(AtomicMemoryAccumulator const&)            = delete;
#endif

    public:
        /**
         * @symbol ??0AtomicMemoryAccumulator\@ChunkPerformanceData\@\@QEAA\@XZ
         */
        MCAPI AtomicMemoryAccumulator();
        /**
         * @symbol ?getMemoryAverage\@AtomicMemoryAccumulator\@ChunkPerformanceData\@\@QEBA_KXZ
         */
        MCAPI unsigned __int64 getMemoryAverage() const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKPERFORMANCEDATA
public:
    ChunkPerformanceData& operator=(ChunkPerformanceData const&) = delete;
    ChunkPerformanceData(ChunkPerformanceData const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ChunkPerformanceData\@\@QEAA\@XZ
     */
    MCAPI ChunkPerformanceData();
    /**
     * @symbol ?recordLoadedChunk\@ChunkPerformanceData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const&);
    /**
     * @symbol ?resetAll\@ChunkPerformanceData\@\@QEAAXXZ
     */
    MCAPI void resetAll();
};
