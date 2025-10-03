#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mNeedsInitialization;
    ::ll::TypedStorage<4, 4, int>  mMinimumTimeTicks;
    ::ll::TypedStorage<4, 4, int>  mMaxAdditionalTimeTicks;
    ::ll::TypedStorage<4, 4, int>  mRemainingTimeTicks;
    // NOLINTEND
};
