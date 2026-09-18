#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/event_data/ServerTelemetryData.h"
#include "mc/network/connection/ReconnectionType.h"

struct PlayerJoinWorldContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                           partyId;
    ::ll::TypedStorage<1, 1, bool>                                                     isPartyLeader;
    ::ll::TypedStorage<1, 1, bool>                                                     isPartyDestination;
    ::ll::TypedStorage<1, 1, bool>                                                     isServerTransfer;
    ::ll::TypedStorage<1, 1, ::Connection::ReconnectionType>                           reconnectionType;
    ::ll::TypedStorage<8, 136, ::std::optional<::Social::Events::ServerTelemetryData>> serverTelemetryData;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerJoinWorldContext& operator=(PlayerJoinWorldContext const&);
    PlayerJoinWorldContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerJoinWorldContext(::PlayerJoinWorldContext const&);

    MCAPI ~PlayerJoinWorldContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerJoinWorldContext const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
