#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkFinalDeleter {
public:
    // prevent constructor by default
    LevelChunkFinalDeleter& operator=(LevelChunkFinalDeleter const&);
    LevelChunkFinalDeleter(LevelChunkFinalDeleter const&);
    LevelChunkFinalDeleter();

public:
    // NOLINTBEGIN
    // symbol: ??RLevelChunkFinalDeleter@@QEAAXPEAVLevelChunk@@@Z
    MCAPI void operator()(class LevelChunk* lc);

    // NOLINTEND
};
