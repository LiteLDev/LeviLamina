#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveActorAbsolutePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk70a94c;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveActorAbsolutePacketPayload& operator=(MoveActorAbsolutePacketPayload const&);
    MoveActorAbsolutePacketPayload(MoveActorAbsolutePacketPayload const&);
    MoveActorAbsolutePacketPayload();
};
