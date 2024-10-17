#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class BalloonSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BalloonSystem& operator=(BalloonSystem const&);
    BalloonSystem(BalloonSystem const&);
    BalloonSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BalloonSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

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
