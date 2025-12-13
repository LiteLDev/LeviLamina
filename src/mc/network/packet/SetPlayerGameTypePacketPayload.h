#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetPlayerGameTypePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2ed951;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPlayerGameTypePacketPayload& operator=(SetPlayerGameTypePacketPayload const&);
    SetPlayerGameTypePacketPayload(SetPlayerGameTypePacketPayload const&);
    SetPlayerGameTypePacketPayload();
};
