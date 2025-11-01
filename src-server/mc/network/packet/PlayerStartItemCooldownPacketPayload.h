#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerStartItemCooldownPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mItemCategory;
    ::ll::TypedStorage<4, 4, int> mDurationTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStartItemCooldownPacketPayload& operator=(PlayerStartItemCooldownPacketPayload const&);
    PlayerStartItemCooldownPacketPayload(PlayerStartItemCooldownPacketPayload const&);
    PlayerStartItemCooldownPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::PlayerStartItemCooldownPacketPayload& operator=(::PlayerStartItemCooldownPacketPayload&&);

    MCAPI ~PlayerStartItemCooldownPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
