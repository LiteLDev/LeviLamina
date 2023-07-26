#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkPhase1Deleter {

public:
    // prevent constructor by default
    LevelChunkPhase1Deleter& operator=(LevelChunkPhase1Deleter const&) = delete;
    LevelChunkPhase1Deleter(LevelChunkPhase1Deleter const&)            = delete;
    LevelChunkPhase1Deleter()                                          = delete;

public:
    /**
     * @symbol ??RLevelChunkPhase1Deleter\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void operator()(class LevelChunk*); // NOLINT
};
