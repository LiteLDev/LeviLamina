#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class HoldBlockSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HoldBlockSystem& operator=(HoldBlockSystem const&);
    HoldBlockSystem(HoldBlockSystem const&);
    HoldBlockSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoldBlockSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& eventDispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry&);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent& dieEvent);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void registerEvents$(entt::dispatcher& eventDispatcher);

    MCAPI void singleTick$(class EntityRegistry& registry, class EntityContext& entity);

    MCAPI void singleTick$(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI void tick$(class EntityRegistry&);

    // NOLINTEND
};
