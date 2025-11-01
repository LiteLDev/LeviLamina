#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LocatorState : int {
    Idle = 0,
    Announcing = 1,
    Discovering = 2,
};
