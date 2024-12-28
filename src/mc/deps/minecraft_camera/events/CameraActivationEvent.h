#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraActivationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk67c473;
    ::ll::UntypedStorage<4, 4>  mUnk2d412c;
    ::ll::UntypedStorage<4, 4>  mUnk1b7be1;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraActivationEvent& operator=(CameraActivationEvent const&);
    CameraActivationEvent(CameraActivationEvent const&);
    CameraActivationEvent();
};
