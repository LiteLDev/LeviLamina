#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ActorLimitedLifetimeTickSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ActorLimitedLifetimeTickSystem& operator=(ActorLimitedLifetimeTickSystem const&);
    ActorLimitedLifetimeTickSystem(ActorLimitedLifetimeTickSystem const&);
    ActorLimitedLifetimeTickSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorLimitedLifetimeTickSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND
};
