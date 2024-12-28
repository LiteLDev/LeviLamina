#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelGameRuleChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6d0504;
    ::ll::UntypedStorage<1, 1> mUnk7257a9;
    ::ll::UntypedStorage<4, 4> mUnkb06cbe;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelGameRuleChangeEvent& operator=(LevelGameRuleChangeEvent const&);
    LevelGameRuleChangeEvent(LevelGameRuleChangeEvent const&);
    LevelGameRuleChangeEvent();
};
