#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class InstantDespawnSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    InstantDespawnSystem& operator=(InstantDespawnSystem const&);
    InstantDespawnSystem(InstantDespawnSystem const&);
    InstantDespawnSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InstantDespawnSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    MCAPI static struct TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class InstantDespawnComponent&);

    // NOLINTEND
};
