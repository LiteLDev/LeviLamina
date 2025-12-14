#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"

struct AnvilDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                     mDamage;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPosition;
    // NOLINTEND
};
