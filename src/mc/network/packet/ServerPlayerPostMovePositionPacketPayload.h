#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerPostMovePositionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfe90eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerPostMovePositionPacketPayload& operator=(ServerPlayerPostMovePositionPacketPayload const&);
    ServerPlayerPostMovePositionPacketPayload(ServerPlayerPostMovePositionPacketPayload const&);
    ServerPlayerPostMovePositionPacketPayload();
};
