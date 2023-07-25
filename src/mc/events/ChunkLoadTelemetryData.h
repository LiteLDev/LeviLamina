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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADTELEMETRYDATA_SERVERCHUNKLOADING
    public:
        ServerChunkLoading& operator=(ServerChunkLoading const&) = delete;
        ServerChunkLoading(ServerChunkLoading const&)            = delete;
        ServerChunkLoading()                                     = delete;
#endif

    public:
        /**
         * @symbol ?toJson\@ServerChunkLoading\@ChunkLoadTelemetryData\@\@QEBA?AVValue\@Json\@\@XZ
         */
        MCAPI class Json::Value toJson() const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADTELEMETRYDATA
public:
    ChunkLoadTelemetryData& operator=(ChunkLoadTelemetryData const&) = delete;
    ChunkLoadTelemetryData(ChunkLoadTelemetryData const&)            = delete;
    ChunkLoadTelemetryData()                                         = delete;
#endif

public:
    /**
     * @symbol ?recordLoadedChunk\@ChunkLoadTelemetryData\@\@QEAAXAEBVLevelChunk\@\@\@Z
     */
    MCAPI void recordLoadedChunk(class LevelChunk const&);
    /**
     * @symbol ?toJson\@ChunkLoadTelemetryData\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value toJson() const;
};
