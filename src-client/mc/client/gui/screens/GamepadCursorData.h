#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GamepadCursorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mEnabled;
    ::ll::TypedStorage<1, 1, bool>  mTempDisabled;
    ::ll::TypedStorage<4, 4, float> mSensitivity;
    // NOLINTEND
};
