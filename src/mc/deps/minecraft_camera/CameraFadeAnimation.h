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
        ::ll::UntypedStorage<4, 4> mUnk2946e5;
        ::ll::UntypedStorage<4, 4> mUnkfb5d8c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Keyframe& operator=(Keyframe const&);
        Keyframe(Keyframe const&);
        Keyframe();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk26c3a0;
    ::ll::UntypedStorage<4, 4>  mUnk5c5a75;
    ::ll::UntypedStorage<4, 4>  mUnkf3b045;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraFadeAnimation& operator=(CameraFadeAnimation const&);
    CameraFadeAnimation(CameraFadeAnimation const&);
    CameraFadeAnimation();
};
