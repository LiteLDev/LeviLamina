#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RespawnPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkc2c250;
    ::ll::UntypedStorage<1, 1>  mUnk8a3ea8;
    ::ll::UntypedStorage<8, 8>  mUnk5cdab4;
    // NOLINTEND

public:
    // prevent constructor by default
    RespawnPacketPayload& operator=(RespawnPacketPayload const&);
    RespawnPacketPayload(RespawnPacketPayload const&);
    RespawnPacketPayload();
};
