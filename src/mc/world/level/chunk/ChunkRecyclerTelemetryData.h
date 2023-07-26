#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkRecyclerTelemetryData {
public:
    // ChunkRecyclerTelemetryData inner types declare
    // clang-format off
    struct BucketContext;
    class TaskInfo;
    // clang-format on

    // ChunkRecyclerTelemetryData inner types define
    struct BucketContext {

    public:
        // prevent constructor by default
        BucketContext(BucketContext const&) = delete;
        BucketContext()                     = delete;

    public:
        /**
         * @symbol ??4BucketContext\@ChunkRecyclerTelemetryData\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct ChunkRecyclerTelemetryData::BucketContext&
        operator=(struct ChunkRecyclerTelemetryData::BucketContext const&); // NOLINT
        /**
         * @symbol ??1BucketContext\@ChunkRecyclerTelemetryData\@\@QEAA\@XZ
         */
        MCAPI ~BucketContext(); // NOLINT
    };

    class TaskInfo {

    public:
        // prevent constructor by default
        TaskInfo& operator=(TaskInfo const&) = delete;
        TaskInfo(TaskInfo const&)            = delete;
        TaskInfo()                           = delete;
    };

public:
    // prevent constructor by default
    ChunkRecyclerTelemetryData& operator=(ChunkRecyclerTelemetryData const&) = delete;
    ChunkRecyclerTelemetryData(ChunkRecyclerTelemetryData const&)            = delete;

public:
    /**
     * @symbol ??0ChunkRecyclerTelemetryData\@\@QEAA\@XZ
     */
    MCAPI ChunkRecyclerTelemetryData(); // NOLINT
    /**
     * @symbol ?endLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void endLevel(class Level&); // NOLINT
    /**
     * @symbol ?recordCacheCheck\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordCacheCheck(class LevelChunk const&); // NOLINT
    /**
     * @symbol ?recordTaskCompleted\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevelChunk\@\@AEBVTaskInfo\@1\@\@Z
     */
    MCAPI void
    recordTaskCompleted(class LevelChunk const&, class ChunkRecyclerTelemetryData::TaskInfo const&); // NOLINT
    /**
     * @symbol ?startLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevel\@\@\@Z
     */
    MCAPI void startLevel(class Level const&); // NOLINT
    /**
     * @symbol ?tickLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevel\@\@\@Z
     */
    MCAPI void tickLevel(class Level const&); // NOLINT

    // private:
    /**
     * @symbol ?_reset\@ChunkRecyclerTelemetryData\@\@AEAAXXZ
     */
    MCAPI void _reset(); // NOLINT
    /**
     * @symbol ?_setIsLocked\@ChunkRecyclerTelemetryData\@\@AEAAXXZ
     */
    MCAPI void _setIsLocked(); // NOLINT

private:
};
