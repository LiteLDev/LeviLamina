#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetActorMotionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7ea6f2;
    ::ll::UntypedStorage<4, 12> mUnk88c412;
    ::ll::UntypedStorage<8, 8>  mUnk33371e;
    // NOLINTEND

public:
    // prevent constructor by default
    SetActorMotionPacketPayload& operator=(SetActorMotionPacketPayload const&);
    SetActorMotionPacketPayload(SetActorMotionPacketPayload const&);
    SetActorMotionPacketPayload();
};
