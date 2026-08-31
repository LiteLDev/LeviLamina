#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/PlayerScoreSetFunction.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class Objective;
class Scoreboard;
// clang-format on

class ScoreboardIdentityRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mObjectiveReferences;
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScoreboardOperationResult
    modifyScoreInObjective(int& result, ::Objective& objective, int score, ::PlayerScoreSetFunction fn);

    MCAPI bool removeFromObjective(::Scoreboard& scoreboard, ::Objective& objective);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScoreboardIdentityRef const& Undefined();
    // NOLINTEND
};
