#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct IncomingPacketEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mSender;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>        mPacketId;
    ::ll::TypedStorage<8, 8, uint64>                      mPacketSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~IncomingPacketEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
