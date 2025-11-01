#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

enum class BehaviorType : uint {
    NavOption = 0,
    UIBehaviorTypeStart = 1,
    NavLine = 1,
    NavFill = 2,
    UIBehaviorTypeEnd = 2,
    Count = 3,
    Invalid = 3,
};

}
