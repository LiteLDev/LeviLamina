#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerJoinWorldContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> partyId;
    ::ll::TypedStorage<1, 1, bool>           isPartyLeader;
    ::ll::TypedStorage<1, 1, bool>           isPartyDestination;
    ::ll::TypedStorage<1, 1, bool>           isServerTransfer;
    ::ll::TypedStorage<1, 1, bool>           isReconnect;
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
