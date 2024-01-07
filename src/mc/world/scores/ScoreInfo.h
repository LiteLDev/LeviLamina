#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/Objective.h"

struct ScoreInfo {
public:
    Objective const* mObjective;
    bool             mHasScore;
    int              mScore;

public:
    // prevent constructor by default
    ScoreInfo& operator=(ScoreInfo const&);
    ScoreInfo(ScoreInfo const&);
    ScoreInfo();
};
