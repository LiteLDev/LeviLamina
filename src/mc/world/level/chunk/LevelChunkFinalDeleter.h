#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelChunk;
// clang-format on

struct LevelChunkFinalDeleter {
public:
    // prevent constructor by default
    LevelChunkFinalDeleter& operator=(LevelChunkFinalDeleter const&);
    LevelChunkFinalDeleter(LevelChunkFinalDeleter const&);
    LevelChunkFinalDeleter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void operator()(::LevelChunk* lc);
    // NOLINTEND
};
