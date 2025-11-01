#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct UpdateClientInputLocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>    mInputLockComponentData;
    ::ll::TypedStorage<4, 12, ::Vec3> mServerPos;
    // NOLINTEND
};
