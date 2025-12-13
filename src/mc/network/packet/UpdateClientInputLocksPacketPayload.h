#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateClientInputLocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk62abda;
    ::ll::UntypedStorage<4, 12> mUnk8ec6da;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateClientInputLocksPacketPayload& operator=(UpdateClientInputLocksPacketPayload const&);
    UpdateClientInputLocksPacketPayload(UpdateClientInputLocksPacketPayload const&);
    UpdateClientInputLocksPacketPayload();
};
