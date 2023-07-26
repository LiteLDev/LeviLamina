/**
 * @file  ChunkLoadTelemetryData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ChunkLoadTelemetryData.
 *
 */
struct ChunkLoadTelemetryData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADTELEMETRYDATA
public:
    struct ChunkLoadTelemetryData& operator=(struct ChunkLoadTelemetryData const &) = delete;
    ChunkLoadTelemetryData(struct ChunkLoadTelemetryData const &) = delete;
    ChunkLoadTelemetryData() = delete;
#endif

public:
    /**
     * @symbol  ?recordLoadedChunk\@ChunkLoadTelemetryData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const &);
    /**
     * @symbol  ?toJson\@ChunkLoadTelemetryData\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value toJson() const;

};