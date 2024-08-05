#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class MountTamingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    MountTamingSystem& operator=(MountTamingSystem const&);
    MountTamingSystem(MountTamingSystem const&);
    MountTamingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MountTamingSystem() = default;

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
