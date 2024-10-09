#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class RailActivatorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    RailActivatorSystem& operator=(RailActivatorSystem const&);
    RailActivatorSystem(RailActivatorSystem const&);
    RailActivatorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RailActivatorSystem() = default;

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
    MCAPI static void _tickComponent(
        class EntityContext&          entity,
        class ActorOwnerComponent&    actorOwnerComponent,
        class RailActivatorComponent& railActivatorComponent
    );

    // NOLINTEND
};
