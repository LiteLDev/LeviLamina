#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

class GameEventMovementTrackingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GameEventMovementTrackingSystem& operator=(GameEventMovementTrackingSystem const&);
    GameEventMovementTrackingSystem(GameEventMovementTrackingSystem const&);
    GameEventMovementTrackingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameEventMovementTrackingSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickGameEventMovementTrackingComponent(
        class ActorOwnerComponent&                        actorOwnerComponent,
        class GameEventMovementTrackingComponent&         gameEventMovementTrackingComponent,
        class Optional<class RailMovementComponent const> railMovementComponent
    );

    MCAPI static void _trackMovement(
        class Actor&                                      actor,
        class GameEventMovementTrackingComponent&         component,
        class Optional<class RailMovementComponent const> railMovementComponent
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(class EntityRegistry& registry, class EntityContext& entity);

    MCAPI void singleTick$(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI void tick$(class EntityRegistry& registry);

    // NOLINTEND
};
