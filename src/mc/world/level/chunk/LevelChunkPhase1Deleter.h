#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkPhase1Deleter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKPHASE1DELETER
public:
    LevelChunkPhase1Deleter& operator=(LevelChunkPhase1Deleter const&) = delete;
    LevelChunkPhase1Deleter(LevelChunkPhase1Deleter const&)            = delete;
    LevelChunkPhase1Deleter()                                          = delete;
#endif

public:
    /**
     * @symbol ??RLevelChunkPhase1Deleter\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void operator()(class LevelChunk*);
};
