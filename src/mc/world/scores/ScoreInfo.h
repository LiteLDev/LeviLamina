#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreInfo {
public:
    // prevent constructor by default
    ScoreInfo& operator=(ScoreInfo const&);
    ScoreInfo(ScoreInfo const&);
    ScoreInfo();
};
