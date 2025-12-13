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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OutgoingPacketEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
