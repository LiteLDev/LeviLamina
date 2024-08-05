#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HurtOnConditionSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HurtOnConditionSystem& operator=(HurtOnConditionSystem const&);
    HurtOnConditionSystem(HurtOnConditionSystem const&);
    HurtOnConditionSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HurtOnConditionSystem() = default;

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
