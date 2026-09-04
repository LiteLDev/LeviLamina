#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EditorConnectionJoinIntent : int {
    Default       = 0,
    EditorIntent  = 1,
    VanillaIntent = 2,
    ServerDecides = 3,
};
