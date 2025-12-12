#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_camera/CameraInstruction.h"

struct CameraInstructionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::CameraInstruction> mCameraInstruction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CameraInstructionPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
