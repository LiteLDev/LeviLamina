#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgeableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgeableSystem& operator=(AgeableSystem const&);
    AgeableSystem(AgeableSystem const&);
    AgeableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgeableSystem() = default;

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
