#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraClearInstructionEvent {
public:
    // prevent constructor by default
    CameraClearInstructionEvent& operator=(CameraClearInstructionEvent const&);
    CameraClearInstructionEvent(CameraClearInstructionEvent const&);
    CameraClearInstructionEvent();
};
