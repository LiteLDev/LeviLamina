#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ControllerRefreshState : int {
    WaitingForApplet  = 0,
    WaitingForRefresh = 1,
    Complete          = 2,
};
