#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraAimAssistPacketPayload {
public:
    // CameraAimAssistPacketPayload inner types define
    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
        Count = 2,
    };

    enum class TargetMode : uchar {
        Angle    = 0,
        Distance = 1,
        Count    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke19d04;
    ::ll::UntypedStorage<4, 8>  mUnk6e5ec0;
    ::ll::UntypedStorage<4, 4>  mUnk51c43c;
    ::ll::UntypedStorage<1, 1>  mUnk737299;
    ::ll::UntypedStorage<1, 1>  mUnk27de9d;
    ::ll::UntypedStorage<1, 1>  mUnk8dc1c7;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPacketPayload& operator=(CameraAimAssistPacketPayload const&);
    CameraAimAssistPacketPayload(CameraAimAssistPacketPayload const&);
    CameraAimAssistPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraAimAssistPacketPayload& operator=(::CameraAimAssistPacketPayload&&);

    MCNAPI ~CameraAimAssistPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
