#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistPresetsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk615661;
    ::ll::UntypedStorage<8, 24> mUnk14e651;
    ::ll::UntypedStorage<1, 1>  mUnkae48ab;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetsPacketPayload& operator=(CameraAimAssistPresetsPacketPayload const&);
    CameraAimAssistPresetsPacketPayload(CameraAimAssistPresetsPacketPayload const&);
    CameraAimAssistPresetsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraAimAssistPresetsPacketPayload& operator=(::CameraAimAssistPresetsPacketPayload&&);

    MCNAPI ~CameraAimAssistPresetsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
