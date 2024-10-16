#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class DespawnSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DespawnSystem& operator=(DespawnSystem const&);
    DespawnSystem(DespawnSystem const&);
    DespawnSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DespawnSystem() = default;

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
    MCAPI static void
    _tickComponent(class ActorOwnerComponent& actorOwnerComponent, class DespawnComponent& despawnComponent);

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
