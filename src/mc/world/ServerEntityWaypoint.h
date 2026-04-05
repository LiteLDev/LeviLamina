#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/EntityWaypointVisibilityRules.h"
#include "mc/world/ServerWaypoint.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class ServerEntityWaypoint : public ::ServerWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID const>             mActorID;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef const>            mEntityRef;
    ::ll::TypedStorage<4, 20, ::std::optional<::WorldPosition>> mClientWorldPosition;
    ::ll::TypedStorage<1, 1, ::EntityWaypointVisibilityRules>   mEntityVisibilityRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const /*override*/;

    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;

    virtual void update(::Player const& viewingPlayer) /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ~ServerEntityWaypoint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updatePosition(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::ActorUniqueID> $tryGetActorID() const;

    MCAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;

    MCAPI void $update(::Player const& viewingPlayer);

    MCAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
