#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraPresetsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk370942;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetsPacketPayload& operator=(CameraPresetsPacketPayload const&);
    CameraPresetsPacketPayload(CameraPresetsPacketPayload const&);
    CameraPresetsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraPresetsPacketPayload& operator=(::CameraPresetsPacketPayload&&);

    MCNAPI ~CameraPresetsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
