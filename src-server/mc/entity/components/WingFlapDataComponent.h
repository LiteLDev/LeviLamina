#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WingFlapDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFlapO;
    ::ll::TypedStorage<4, 4, float> mFlap;
    ::ll::TypedStorage<4, 4, float> mFlapSpeed;
    ::ll::TypedStorage<4, 4, float> mFlapping;
    // NOLINTEND

};
