#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityRegistry;
class GameEventMovementTrackingComponent;
struct RailMovementComponent;
// clang-format on

class GameEventMovementTrackingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~GameEventMovementTrackingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickGameEventMovementTrackingComponent(
        ::ActorOwnerComponent&                    actorOwnerComponent,
        ::GameEventMovementTrackingComponent&     gameEventMovementTrackingComponent,
        ::Optional<::RailMovementComponent const> railMovementComponent
    );

    MCNAPI static void _trackMovement(
        ::Actor&                                  actor,
        ::GameEventMovementTrackingComponent&     component,
        ::Optional<::RailMovementComponent const> railMovementComponent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
