#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

struct GoalDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2becd1;
    ::ll::UntypedStorage<8, 32> mUnk1de82c;
    ::ll::UntypedStorage<1, 1> mUnkb352a2;
    ::ll::UntypedStorage<4, 4> mUnkf7f2ab;
    // NOLINTEND

public:
    // prevent constructor by default
    GoalDebugInfo& operator=(GoalDebugInfo const&);
    GoalDebugInfo(GoalDebugInfo const&);
    GoalDebugInfo();

};

}
