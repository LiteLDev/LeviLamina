#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VariableMaxAutoStepComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBaseValue;
    ::ll::TypedStorage<4, 4, float> mControlledValue;
    ::ll::TypedStorage<4, 4, float> mJumpPreventedValue;
    ::ll::TypedStorage<1, 1, bool> mHardcodedClientSide;
    // NOLINTEND

};
