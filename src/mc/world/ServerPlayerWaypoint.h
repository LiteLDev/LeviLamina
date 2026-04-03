#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ServerEntityWaypoint.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class ServerPlayerWaypoint : public ::ServerEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8fa22a;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerWaypoint& operator=(ServerPlayerWaypoint const&);
    ServerPlayerWaypoint(ServerPlayerWaypoint const&);
    ServerPlayerWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;

    virtual ~ServerPlayerWaypoint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
