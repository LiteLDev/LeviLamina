#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"

struct LecternUpdatePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPage;
    ::ll::TypedStorage<4, 4, int> mTotalPages;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    // NOLINTEND

};
