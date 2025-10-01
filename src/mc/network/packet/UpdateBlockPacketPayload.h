#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"

struct UpdateBlockPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<4, 4, uint>                    mLayer;
    ::ll::TypedStorage<1, 1, uchar>                   mUpdateFlags;
    ::ll::TypedStorage<4, 4, uint>                    mRuntimeId;
    // NOLINTEND
};
