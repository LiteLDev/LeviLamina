#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class GroupSizeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GroupSizeSystem& operator=(GroupSizeSystem const&);
    GroupSizeSystem(GroupSizeSystem const&);
    GroupSizeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GroupSizeSystem() = default;

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
    _tickComponent(class ActorOwnerComponent& actorOwnerComponent, class GroupSizeComponent& groupSizeComponent);

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
