/**
 * @file  ChunkLoadTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


class ChunkLoadTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADTELEMETRYDATA
public:
    class ChunkLoadTelemetryData& operator=(class ChunkLoadTelemetryData const &) = delete;
    ChunkLoadTelemetryData(class ChunkLoadTelemetryData const &) = delete;
    ChunkLoadTelemetryData() = delete;
#endif

public:
    /**
     * @symbol ?recordLoadedChunk@ChunkLoadTelemetryData@@QEAAXAEBVLevelChunk@@@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const &);

};