#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraFadeAnimation {
public:
    // CameraFadeAnimation inner types declare
    // clang-format off
    struct Keyframe;
    // clang-format on

    // CameraFadeAnimation inner types define
    struct Keyframe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mTime;
        ::ll::TypedStorage<4, 4, float> mValue;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CameraFadeAnimation::Keyframe>> mKeyframes;
    ::ll::TypedStorage<4, 4, float>                                           mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                                           mElapsedTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void _addKeyframe(float time, float value);

    MCAPI void addFade(float inTime, float requestedHoldTime, float outTime, float targetAlpha);
#endif
    // NOLINTEND
};
