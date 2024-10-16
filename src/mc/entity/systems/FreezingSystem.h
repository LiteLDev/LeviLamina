#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class FreezingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    FreezingSystem& operator=(FreezingSystem const&);
    FreezingSystem(FreezingSystem const&);
    FreezingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FreezingSystem() = default;

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

    MCAPI static class mce::UUID const& FREEZE_EFFECT_UUID();

    MCAPI static int const& VULNERABLE_MOB_FREEZE_DAMAGE();

    // NOLINTEND
};
