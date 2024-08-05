#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class OutOfWorldSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    OutOfWorldSystem& operator=(OutOfWorldSystem const&);
    OutOfWorldSystem(OutOfWorldSystem const&);
    OutOfWorldSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OutOfWorldSystem() = default;

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
