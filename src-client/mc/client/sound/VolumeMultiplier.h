#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

struct VolumeMultiplier {
public:
    // VolumeMultiplier inner types declare
    // clang-format off
    struct EasingState;
    // clang-format on

    // VolumeMultiplier inner types define
    struct EasingState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        mStartValue;
        ::ll::TypedStorage<4, 4, float>        mTargetValue;
        ::ll::TypedStorage<4, 4, float>        mElapsedTime;
        ::ll::TypedStorage<4, 4, float>        mTotalTime;
        ::ll::TypedStorage<4, 4, ::EasingType> mEasingType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                             mCurrentMultiplier;
    ::ll::TypedStorage<4, 24, ::std::optional<::VolumeMultiplier::EasingState>> mEasingState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool advanceTime(float elapsedTime);
    // NOLINTEND
};
