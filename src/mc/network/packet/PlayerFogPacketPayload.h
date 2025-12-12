#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFogPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1c87b2;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFogPacketPayload& operator=(PlayerFogPacketPayload const&);
    PlayerFogPacketPayload(PlayerFogPacketPayload const&);
    PlayerFogPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerFogPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
