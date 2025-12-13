#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk43fb4a;
    ::ll::UntypedStorage<8, 64> mUnka9b812;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestRequestPacketPayload(GameTestRequestPacketPayload const&);
    GameTestRequestPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GameTestRequestPacketPayload& operator=(::GameTestRequestPacketPayload&&);

    MCNAPI ::GameTestRequestPacketPayload& operator=(::GameTestRequestPacketPayload const&);

    MCNAPI ~GameTestRequestPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
