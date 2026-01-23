#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/CameraPresets.h"

struct CameraPresetsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::CameraPresets> mCameraPresets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CameraPresetsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
