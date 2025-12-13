#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementEffectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2502a5;
    ::ll::UntypedStorage<4, 4> mUnka8e819;
    ::ll::UntypedStorage<4, 4> mUnkaa7cfb;
    ::ll::UntypedStorage<8, 8> mUnkbe1bb5;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectPacketPayload& operator=(MovementEffectPacketPayload const&);
    MovementEffectPacketPayload(MovementEffectPacketPayload const&);
    MovementEffectPacketPayload();
};
