#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class LevelChunkPerformanceTelemetry {
public:
    // prevent constructor by default
    LevelChunkPerformanceTelemetry& operator=(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry(LevelChunkPerformanceTelemetry const&);
    LevelChunkPerformanceTelemetry();

public:
    // NOLINTBEGIN
    MCAPI void sendPerformanceTelemetry(class Bedrock::NonOwnerPointer<struct ChunkPerformanceData> chunkPerformanceData
    );

    // NOLINTEND
};
