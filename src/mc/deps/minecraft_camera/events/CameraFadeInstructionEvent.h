#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraFadeInstructionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnkb64405;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraFadeInstructionEvent& operator=(CameraFadeInstructionEvent const&);
    CameraFadeInstructionEvent(CameraFadeInstructionEvent const&);
    CameraFadeInstructionEvent();
};
