#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemoveActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk522a23;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveActorPacketPayload& operator=(RemoveActorPacketPayload const&);
    RemoveActorPacketPayload(RemoveActorPacketPayload const&);
    RemoveActorPacketPayload();
};
