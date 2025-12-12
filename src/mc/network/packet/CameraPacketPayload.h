#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnked1a05;
    ::ll::UntypedStorage<8, 8> mUnk949e37;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPacketPayload& operator=(CameraPacketPayload const&);
    CameraPacketPayload(CameraPacketPayload const&);
    CameraPacketPayload();
};
