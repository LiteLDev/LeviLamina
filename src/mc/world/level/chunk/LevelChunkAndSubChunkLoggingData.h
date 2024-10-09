#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkAndSubChunkLoggingData {
public:
    // prevent constructor by default
    LevelChunkAndSubChunkLoggingData& operator=(LevelChunkAndSubChunkLoggingData const&);
    LevelChunkAndSubChunkLoggingData(LevelChunkAndSubChunkLoggingData const&);
    LevelChunkAndSubChunkLoggingData();

public:
    // NOLINTBEGIN
    MCAPI static void logLevelChunkEvent(class ChunkPos const& chunkPos, char const* message, bool isClientSide);

    MCAPI static void logSubChunkEvent(class SubChunkPos const& subChunkPos, char const* message, bool isClientSide);

    // NOLINTEND
};
