#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/systems/ITickingSystem.h"

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
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _tickGameEventMovementTrackingComponent(class ActorOwnerComponent&, class GameEventMovementTrackingComponent&, class Optional<class RailMovementComponent const>);

    MCAPI static void
    _trackMovement(class Actor&, class GameEventMovementTrackingComponent&, class Optional<class RailMovementComponent const>);

    // NOLINTEND
};
