#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraShakeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk51526c;
    ::ll::UntypedStorage<4, 4> mUnk6e3f40;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeEvent& operator=(CameraShakeEvent const&);
    CameraShakeEvent(CameraShakeEvent const&);
    CameraShakeEvent();
};
