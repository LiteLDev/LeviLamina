#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerActionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk713a3b;
    ::ll::UntypedStorage<4, 12> mUnk22568e;
    ::ll::UntypedStorage<4, 4>  mUnke1d25a;
    ::ll::UntypedStorage<4, 4>  mUnka53ca5;
    ::ll::UntypedStorage<8, 8>  mUnkaac9f7;
    ::ll::UntypedStorage<1, 1>  mUnkbf2490;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerActionPacketPayload& operator=(PlayerActionPacketPayload const&);
    PlayerActionPacketPayload(PlayerActionPacketPayload const&);
    PlayerActionPacketPayload();
};
