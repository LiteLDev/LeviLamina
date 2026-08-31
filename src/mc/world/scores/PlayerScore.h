#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ScoreboardId.h"

struct PlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    ::ll::TypedStorage<4, 4, int>             mScore;
    // NOLINTEND
};
