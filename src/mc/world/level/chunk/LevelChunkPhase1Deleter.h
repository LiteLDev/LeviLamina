#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelChunkPhase1Deleter {
public:
    // prevent constructor by default
    LevelChunkPhase1Deleter& operator=(LevelChunkPhase1Deleter const&);
    LevelChunkPhase1Deleter(LevelChunkPhase1Deleter const&);
    LevelChunkPhase1Deleter();

public:
    // NOLINTBEGIN
    MCAPI void operator()(class LevelChunk* lc);

    // NOLINTEND
};
