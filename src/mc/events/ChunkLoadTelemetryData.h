#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ChunkLoadTelemetryData {
public:
    // ChunkLoadTelemetryData inner types declare
    // clang-format off
    class ServerChunkLoading;
    // clang-format on

    // ChunkLoadTelemetryData inner types define
    class ServerChunkLoading {

    public:
        // prevent constructor by default
        ServerChunkLoading& operator=(ServerChunkLoading const&) = delete;
        ServerChunkLoading(ServerChunkLoading const&)            = delete;
        ServerChunkLoading()                                     = delete;

    public:
        /**
         * @symbol ?toJson\@ServerChunkLoading\@ChunkLoadTelemetryData\@\@QEBA?AVValue\@Json\@\@XZ
         */
        MCAPI class Json::Value toJson() const; // NOLINT
    };

public:
    // prevent constructor by default
    ChunkLoadTelemetryData& operator=(ChunkLoadTelemetryData const&) = delete;
    ChunkLoadTelemetryData(ChunkLoadTelemetryData const&)            = delete;
    ChunkLoadTelemetryData()                                         = delete;

public:
    /**
     * @symbol ?recordLoadedChunk\@ChunkLoadTelemetryData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const&); // NOLINT
    /**
     * @symbol ?toJson\@ChunkLoadTelemetryData\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value toJson() const; // NOLINT
};
