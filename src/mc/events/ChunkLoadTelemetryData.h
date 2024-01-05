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
        ServerChunkLoading& operator=(ServerChunkLoading const&);
        ServerChunkLoading(ServerChunkLoading const&);
        ServerChunkLoading();

    public:
        // NOLINTBEGIN
        // symbol: ?toJson@ServerChunkLoading@ChunkLoadTelemetryData@@QEBA?AVValue@Json@@XZ
        MCAPI class Json::Value toJson() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ChunkLoadTelemetryData& operator=(ChunkLoadTelemetryData const&);
    ChunkLoadTelemetryData(ChunkLoadTelemetryData const&);
    ChunkLoadTelemetryData();

public:
    // NOLINTBEGIN
    // symbol: ?recordLoadedChunk@ChunkLoadTelemetryData@@QEAAXAEBVLevelChunk@@@Z
    MCAPI void recordLoadedChunk(class LevelChunk const& chunk);

    // symbol: ?toJson@ChunkLoadTelemetryData@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value toJson() const;

    // NOLINTEND
};
