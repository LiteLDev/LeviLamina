#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkFinalDeleter {

public:
    // prevent constructor by default
    LevelChunkFinalDeleter& operator=(LevelChunkFinalDeleter const&) = delete;
    LevelChunkFinalDeleter(LevelChunkFinalDeleter const&)            = delete;
    LevelChunkFinalDeleter()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??RLevelChunkFinalDeleter\@\@QEAAXPEAVLevelChunk\@\@\@Z
     */
    MCAPI void operator()(class LevelChunk*);
    // NOLINTEND
};
