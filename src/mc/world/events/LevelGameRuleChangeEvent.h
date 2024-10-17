#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelGameRuleChangeEvent {
public:
    // prevent constructor by default
    LevelGameRuleChangeEvent& operator=(LevelGameRuleChangeEvent const&);
    LevelGameRuleChangeEvent(LevelGameRuleChangeEvent const&);
    LevelGameRuleChangeEvent();
};
