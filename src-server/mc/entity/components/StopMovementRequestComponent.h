#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StopMovementRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mStopVerticalMovement;
    ::ll::TypedStorage<1, 1, bool> mStopHorizontalMovement;
    // NOLINTEND
};
