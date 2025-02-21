#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct VanillaClientGameplayComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>     mSprintTriggerTime;
    ::ll::TypedStorage<4, 4, int>     mJumpRidingTicks;
    ::ll::TypedStorage<4, 4, int>     mJumpTriggerTime;
    ::ll::TypedStorage<4, 4, int>     mFlyTriggerSource;
    ::ll::TypedStorage<4, 4, int>     mScaffoldingDropHeldTime;
    ::ll::TypedStorage<1, 1, bool>    mWasChangeHeight;
    ::ll::TypedStorage<1, 1, bool>    mWasJumping;
    ::ll::TypedStorage<1, 1, bool>    mWasSneaking;
    ::ll::TypedStorage<1, 1, bool>    mWasRunning;
    ::ll::TypedStorage<1, 1, bool>    mEmotingLastTick;
    ::ll::TypedStorage<1, 1, bool>    mSprintingOnInput;
    ::ll::TypedStorage<1, 1, bool>    mBoatingInputSwitchRequested;
    ::ll::TypedStorage<1, 1, bool>    mMinecartInputSwitchRequested;
    ::ll::TypedStorage<4, 12, ::Vec3> mPreviousRidingPosition;
    ::ll::TypedStorage<4, 4, float>   mPreviousRidingDistance;
    ::ll::TypedStorage<8, 8, uint64>  mStartRidingTick;
    // NOLINTEND
};
