#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkAndSubChunkLoggingData {

public:
    // prevent constructor by default
    LevelChunkAndSubChunkLoggingData& operator=(LevelChunkAndSubChunkLoggingData const&) = delete;
    LevelChunkAndSubChunkLoggingData(LevelChunkAndSubChunkLoggingData const&)            = delete;
    LevelChunkAndSubChunkLoggingData()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?logLevelChunkEvent\@LevelChunkAndSubChunkLoggingData\@\@SAXAEBVChunkPos\@\@PEBD_N\@Z
     */
    MCAPI static void logLevelChunkEvent(class ChunkPos const&, char const*, bool);
    /**
     * @symbol ?logSubChunkEvent\@LevelChunkAndSubChunkLoggingData\@\@SAXAEBVSubChunkPos\@\@PEBD_N\@Z
     */
    MCAPI static void logSubChunkEvent(class SubChunkPos const&, char const*, bool);
    // NOLINTEND
};
