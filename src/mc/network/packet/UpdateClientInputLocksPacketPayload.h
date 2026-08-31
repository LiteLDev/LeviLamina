#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateClientInputLocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mInputLockComponentData;
    // NOLINTEND
};
