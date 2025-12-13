#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStartItemCooldownPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3089c8;
    ::ll::UntypedStorage<4, 4>  mUnkb4118c;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStartItemCooldownPacketPayload& operator=(PlayerStartItemCooldownPacketPayload const&);
    PlayerStartItemCooldownPacketPayload(PlayerStartItemCooldownPacketPayload const&);
    PlayerStartItemCooldownPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PlayerStartItemCooldownPacketPayload& operator=(::PlayerStartItemCooldownPacketPayload&&);

    MCNAPI ~PlayerStartItemCooldownPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
