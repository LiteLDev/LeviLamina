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
namespace mce { class Color; }
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
    // prevent constructor by default
    ServerEntityWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const /*override*/;

    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;

    virtual void update(::Player const& viewingPlayer) /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerEntityWaypoint(
        ::WeakEntityRef const&                   entityRef,
        ::ActorUniqueID const&                   actorID,
        ::EntityWaypointVisibilityRules          entityRules,
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color
    );

    MCAPI bool _shouldUpdateClientWorldPosition(
        ::WorldPosition const&                  viewingPlayerWorldPos,
        ::WorldPosition const&                  observedActorWorldPos,
        ::std::optional<::WorldPosition> const& prevObservedActorPos
    );

    MCAPI void _updateAuthority(::Player const& viewingPlayer);

    MCAPI void _updatePosition(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WeakEntityRef const&                   entityRef,
        ::ActorUniqueID const&                   actorID,
        ::EntityWaypointVisibilityRules          entityRules,
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color
    );
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
