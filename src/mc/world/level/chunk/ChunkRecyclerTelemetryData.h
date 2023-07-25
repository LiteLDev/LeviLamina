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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKRECYCLERTELEMETRYDATA_BUCKETCONTEXT
    public:
        BucketContext(BucketContext const&) = delete;
        BucketContext()                     = delete;
#endif

    public:
        /**
         * @symbol ??4BucketContext\@ChunkRecyclerTelemetryData\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct ChunkRecyclerTelemetryData::BucketContext&
        operator=(struct ChunkRecyclerTelemetryData::BucketContext const&);
        /**
         * @symbol ??1BucketContext\@ChunkRecyclerTelemetryData\@\@QEAA\@XZ
         */
        MCAPI ~BucketContext();
    };

    class TaskInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKRECYCLERTELEMETRYDATA_TASKINFO
    public:
        TaskInfo& operator=(TaskInfo const&) = delete;
        TaskInfo(TaskInfo const&)            = delete;
        TaskInfo()                           = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKRECYCLERTELEMETRYDATA
public:
    ChunkRecyclerTelemetryData& operator=(ChunkRecyclerTelemetryData const&) = delete;
    ChunkRecyclerTelemetryData(ChunkRecyclerTelemetryData const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ChunkRecyclerTelemetryData\@\@QEAA\@XZ
     */
    MCAPI ChunkRecyclerTelemetryData();
    /**
     * @symbol ?endLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void endLevel(class Level&);
    /**
     * @symbol ?recordCacheCheck\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordCacheCheck(class LevelChunk const&);
    /**
     * @symbol ?recordTaskCompleted\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevelChunk\@\@AEBVTaskInfo\@1\@\@Z
     */
    MCAPI void recordTaskCompleted(class LevelChunk const&, class ChunkRecyclerTelemetryData::TaskInfo const&);
    /**
     * @symbol ?startLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevel\@\@\@Z
     */
    MCAPI void startLevel(class Level const&);
    /**
     * @symbol ?tickLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevel\@\@\@Z
     */
    MCAPI void tickLevel(class Level const&);

    // private:
    /**
     * @symbol ?_reset\@ChunkRecyclerTelemetryData\@\@AEAAXXZ
     */
    MCAPI void _reset();
    /**
     * @symbol ?_setIsLocked\@ChunkRecyclerTelemetryData\@\@AEAAXXZ
     */
    MCAPI void _setIsLocked();

private:
};
