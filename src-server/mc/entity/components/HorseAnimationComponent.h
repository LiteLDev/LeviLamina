#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseAnimationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mEatCounter;
    ::ll::TypedStorage<4, 4, int> mMouthCounter;
    ::ll::TypedStorage<4, 4, int> mTailCounter;
    // NOLINTEND
};
