#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WYSIWYGState : uint {
    NoControlSelected = 0,
    ControlSelected = 1,
    ModifyingOpacity = 2,
    ModifyingScale = 3,
    ResetConfirmation = 4,
    CloseWithoutSavingConfirmation = 5,
    Exiting = 6,
};
