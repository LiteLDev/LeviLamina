#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/camera_instruction_options/SplineInstruction.h"

struct CameraSplineInstructionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::CameraInstructionOptions::SplineInstruction> mCameraSplineInstruction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~CameraSplineInstructionEvent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
