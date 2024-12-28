#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

struct LevelChunkPhase1Deleter {
public:
    // prevent constructor by default
    LevelChunkPhase1Deleter& operator=(LevelChunkPhase1Deleter const&);
    LevelChunkPhase1Deleter(LevelChunkPhase1Deleter const&);
    LevelChunkPhase1Deleter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void operator()(::LevelChunk* lc);
    // NOLINTEND
};
