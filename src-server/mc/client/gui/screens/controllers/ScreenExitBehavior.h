#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScreenExitBehavior : int {
    LeaveScreen     = 0,
    ExitGame        = 1,
    GoToStartScreen = 2,
    DoNothing       = 3,
};
