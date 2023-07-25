#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkFinalDeleter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKFINALDELETER
public:
    LevelChunkFinalDeleter& operator=(LevelChunkFinalDeleter const&) = delete;
    LevelChunkFinalDeleter(LevelChunkFinalDeleter const&)            = delete;
    LevelChunkFinalDeleter()                                         = delete;
#endif

public:
    /**
     * @symbol ??RLevelChunkFinalDeleter\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void operator()(class LevelChunk*);
};
