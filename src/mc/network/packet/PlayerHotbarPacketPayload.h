#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerHotbarPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2df092;
    ::ll::UntypedStorage<1, 1> mUnk32f33a;
    ::ll::UntypedStorage<1, 1> mUnkcfdf67;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerHotbarPacketPayload& operator=(PlayerHotbarPacketPayload const&);
    PlayerHotbarPacketPayload(PlayerHotbarPacketPayload const&);
    PlayerHotbarPacketPayload();
};
