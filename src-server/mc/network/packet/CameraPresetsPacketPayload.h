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
    // prevent constructor by default
    CameraPresetsPacketPayload& operator=(CameraPresetsPacketPayload const&);
    CameraPresetsPacketPayload(CameraPresetsPacketPayload const&);
    CameraPresetsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CameraPresetsPacketPayload& operator=(::CameraPresetsPacketPayload&&);

    MCAPI ~CameraPresetsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
