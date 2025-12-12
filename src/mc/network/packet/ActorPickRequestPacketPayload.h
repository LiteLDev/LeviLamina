#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPickRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9c2dc9;
    ::ll::UntypedStorage<1, 1> mUnkd3474a;
    ::ll::UntypedStorage<1, 1> mUnk81e1c1;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPickRequestPacketPayload& operator=(ActorPickRequestPacketPayload const&);
    ActorPickRequestPacketPayload(ActorPickRequestPacketPayload const&);
    ActorPickRequestPacketPayload();
};
