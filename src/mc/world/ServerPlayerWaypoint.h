#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/PlayerWaypointVisibilityRules.h"
#include "mc/world/ServerEntityWaypoint.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class ServerPlayerWaypoint : public ::ServerEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerWaypointVisibilityRules> mPlayerVisibilityRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;

    virtual ~ServerPlayerWaypoint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
