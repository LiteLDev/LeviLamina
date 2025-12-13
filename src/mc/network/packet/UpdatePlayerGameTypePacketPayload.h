#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdatePlayerGameTypePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk93e49d;
    ::ll::UntypedStorage<8, 8> mUnkc00c48;
    ::ll::UntypedStorage<8, 8> mUnk6ab1a2;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdatePlayerGameTypePacketPayload& operator=(UpdatePlayerGameTypePacketPayload const&);
    UpdatePlayerGameTypePacketPayload(UpdatePlayerGameTypePacketPayload const&);
    UpdatePlayerGameTypePacketPayload();
};
