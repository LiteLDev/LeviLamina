#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkAndSubChunkLoggingData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKANDSUBCHUNKLOGGINGDATA
public:
    LevelChunkAndSubChunkLoggingData& operator=(LevelChunkAndSubChunkLoggingData const&) = delete;
    LevelChunkAndSubChunkLoggingData(LevelChunkAndSubChunkLoggingData const&)            = delete;
    LevelChunkAndSubChunkLoggingData()                                                   = delete;
#endif

public:
    /**
     * @symbol ?logLevelChunkEvent\@LevelChunkAndSubChunkLoggingData\@\@SAXAEBVChunkPos\@\@PEBD_N\@Z
     */
    MCAPI static void logLevelChunkEvent(class ChunkPos const&, char const*, bool);
    /**
     * @symbol ?logSubChunkEvent\@LevelChunkAndSubChunkLoggingData\@\@SAXAEBVSubChunkPos\@\@PEBD_N\@Z
     */
    MCAPI static void logSubChunkEvent(class SubChunkPos const&, char const*, bool);
};
