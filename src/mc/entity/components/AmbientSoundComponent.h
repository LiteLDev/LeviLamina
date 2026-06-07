#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IRandom;
// clang-format on

class AmbientSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mNeedsInitialization;
    ::ll::TypedStorage<4, 4, int>  mMinimumTimeTicks;
    ::ll::TypedStorage<4, 4, int>  mMaxAdditionalTimeTicks;
    ::ll::TypedStorage<4, 4, int>  mRemainingTimeTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void decreaseRemainingTimeTicks(int ticks);

    MCAPI void initialize(float mMinimumTimeSeconds, float mMaxAdditionalTimeSeconds, ::IRandom& random);

    MCAPI bool isTimeRemaining() const;

    MCAPI void resetRemainingTime(::IRandom& random);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static bool
    extendAmbientSoundRemainingTimeIfBelow(::Actor& owner, float newRemainingTimeSeconds, float belowTimeSeconds);
#endif

    MCAPI static void setAmbientSoundRemainingTime(::Actor& owner, float seconds);
    // NOLINTEND
};
