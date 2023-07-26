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

    public:
        // prevent constructor by default
        AtomicMemoryAccumulator& operator=(AtomicMemoryAccumulator const&) = delete;
        AtomicMemoryAccumulator(AtomicMemoryAccumulator const&)            = delete;

    public:
        /**
         * @symbol ??0AtomicMemoryAccumulator\@ChunkPerformanceData\@\@QEAA\@XZ
         */
        MCAPI AtomicMemoryAccumulator(); // NOLINT
        /**
         * @symbol ?getMemoryAverage\@AtomicMemoryAccumulator\@ChunkPerformanceData\@\@QEBA_KXZ
         */
        MCAPI unsigned __int64 getMemoryAverage() const; // NOLINT
    };

public:
    // prevent constructor by default
    ChunkPerformanceData& operator=(ChunkPerformanceData const&) = delete;
    ChunkPerformanceData(ChunkPerformanceData const&)            = delete;

public:
    /**
     * @symbol ??0ChunkPerformanceData\@\@QEAA\@XZ
     */
    MCAPI ChunkPerformanceData(); // NOLINT
    /**
     * @symbol ?recordLoadedChunk\@ChunkPerformanceData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const&); // NOLINT
    /**
     * @symbol ?resetAll\@ChunkPerformanceData\@\@QEAAXXZ
     */
    MCAPI void resetAll(); // NOLINT
};
