#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/connection/ReconnectionType.h"

struct PlayerJoinWorldContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 partyId;
    ::ll::TypedStorage<1, 1, bool>                           isPartyLeader;
    ::ll::TypedStorage<1, 1, bool>                           isPartyDestination;
    ::ll::TypedStorage<1, 1, bool>                           isServerTransfer;
    ::ll::TypedStorage<1, 1, ::Connection::ReconnectionType> reconnectionType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerJoinWorldContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
