/**
 * @file  ChunkRecyclerTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ChunkRecyclerTelemetryData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKRECYCLERTELEMETRYDATA
public:
    class ChunkRecyclerTelemetryData& operator=(class ChunkRecyclerTelemetryData const &) = delete;
    ChunkRecyclerTelemetryData(class ChunkRecyclerTelemetryData const &) = delete;
#endif

public:
    /**
     * @symbol ??0ChunkRecyclerTelemetryData\@\@QEAA\@XZ
     */
    MCAPI ChunkRecyclerTelemetryData();
    /**
     * @symbol ?endLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void endLevel(class Level &);
    /**
     * @symbol ?recordCacheCheck\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordCacheCheck(class LevelChunk const &);
    /**
     * @symbol ?recordTaskCompleted\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevelChunk\@\@AEBVTaskInfo\@1\@\@Z
     */
    MCAPI void recordTaskCompleted(class LevelChunk const &, class ChunkRecyclerTelemetryData::TaskInfo const &);
    /**
     * @symbol ?startLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevel\@\@\@Z
     */
    MCAPI void startLevel(class Level const &);
    /**
     * @symbol ?tickLevel\@ChunkRecyclerTelemetryData\@\@QEAAXAEBVLevel\@\@\@Z
     */
    MCAPI void tickLevel(class Level const &);

//private:
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
