#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetActorLinkPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72cdcc;
    // NOLINTEND

public:
    // prevent constructor by default
    SetActorLinkPacketPayload& operator=(SetActorLinkPacketPayload const&);
    SetActorLinkPacketPayload(SetActorLinkPacketPayload const&);
    SetActorLinkPacketPayload();
};
