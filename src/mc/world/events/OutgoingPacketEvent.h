#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct OutgoingPacketEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mRecipients;
    ::ll::TypedStorage<4, 4, ::MinecraftPacketIds>                       mPacketId;
    // NOLINTEND

public:
    // prevent constructor by default
    OutgoingPacketEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OutgoingPacketEvent(::std::vector<::WeakRef<::EntityContext>> recipient, ::MinecraftPacketIds packetId);

    MCAPI ~OutgoingPacketEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::WeakRef<::EntityContext>> recipient, ::MinecraftPacketIds packetId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
