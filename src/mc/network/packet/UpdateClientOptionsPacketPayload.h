#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateClientOptionsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk175c0e;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateClientOptionsPacketPayload& operator=(UpdateClientOptionsPacketPayload const&);
    UpdateClientOptionsPacketPayload(UpdateClientOptionsPacketPayload const&);
    UpdateClientOptionsPacketPayload();
};
