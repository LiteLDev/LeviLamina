#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetHealthPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd0f2a4;
    // NOLINTEND

public:
    // prevent constructor by default
    SetHealthPacketPayload& operator=(SetHealthPacketPayload const&);
    SetHealthPacketPayload(SetHealthPacketPayload const&);
    SetHealthPacketPayload();
};
