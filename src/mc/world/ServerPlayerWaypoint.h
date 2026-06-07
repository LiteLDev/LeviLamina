#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/PlayerWaypointVisibilityRules.h"
#include "mc/world/ServerEntityWaypoint.h"
#include "mc/world/ServerWaypoint.h"

// auto generated forward declare list
// clang-format off
class EntityWaypointVisibilityRules;
class Player;
class WeakEntityRef;
struct ActorUniqueID;
namespace mce { class Color; }
// clang-format on

class ServerPlayerWaypoint : public ::ServerEntityWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerWaypointVisibilityRules> mPlayerVisibilityRules;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerPlayerWaypoint(
        ::WeakEntityRef const&                   entityRef,
        ::ActorUniqueID const&                   actorID,
        ::PlayerWaypointVisibilityRules          playerRules,
        ::EntityWaypointVisibilityRules          entityRules,
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::WeakEntityRef const&                   entityRef,
        ::ActorUniqueID const&                   actorID,
        ::PlayerWaypointVisibilityRules          playerRules,
        ::EntityWaypointVisibilityRules          entityRules,
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color
    );
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
