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
        // NOLINTBEGIN
        /**
         * @symbol ??0AtomicMemoryAccumulator\@ChunkPerformanceData\@\@QEAA\@XZ
         */
        MCAPI AtomicMemoryAccumulator();
        /**
         * @symbol ?getMemoryAverage\@AtomicMemoryAccumulator\@ChunkPerformanceData\@\@QEBA_KXZ
         */
        MCAPI uint64_t getMemoryAverage() const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ChunkPerformanceData& operator=(ChunkPerformanceData const&) = delete;
    ChunkPerformanceData(ChunkPerformanceData const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
