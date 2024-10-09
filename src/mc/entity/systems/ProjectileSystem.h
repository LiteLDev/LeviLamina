#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class ProjectileSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ProjectileSystem& operator=(ProjectileSystem const&);
    ProjectileSystem(ProjectileSystem const&);
    ProjectileSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProjectileSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI static void _tickProjectileComponent(class Actor* actor, class ProjectileComponent& projectileComponent);

    // NOLINTEND
};
