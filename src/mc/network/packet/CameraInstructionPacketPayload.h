#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraInstructionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 296> mUnkffade6;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraInstructionPacketPayload& operator=(CameraInstructionPacketPayload const&);
    CameraInstructionPacketPayload(CameraInstructionPacketPayload const&);
    CameraInstructionPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CameraInstructionPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
