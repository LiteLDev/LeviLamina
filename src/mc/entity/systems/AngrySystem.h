#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AngrySystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AngrySystem& operator=(AngrySystem const&);
    AngrySystem(AngrySystem const&);
    AngrySystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AngrySystem() = default;

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
    MCAPI static void _tickComponent(class EntityContext& entity, class AngryComponent& angryComponent);

    // NOLINTEND
};
