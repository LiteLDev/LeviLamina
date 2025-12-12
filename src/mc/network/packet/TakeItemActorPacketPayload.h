#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TakeItemActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk11e9b2;
    ::ll::UntypedStorage<8, 8> mUnk29dc5b;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeItemActorPacketPayload& operator=(TakeItemActorPacketPayload const&);
    TakeItemActorPacketPayload(TakeItemActorPacketPayload const&);
    TakeItemActorPacketPayload();
};
