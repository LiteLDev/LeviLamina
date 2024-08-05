#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/entity/systems/OnFireSystem.h"

class OnFireServerSystem : public ::OnFireSystem {
public:
    // prevent constructor by default
    OnFireServerSystem& operator=(OnFireServerSystem const&);
    OnFireServerSystem(OnFireServerSystem const&);
    OnFireServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnFireServerSystem() = default;

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
    MCAPI static void
    _tickServer(class EntityContext&, class ActorOwnerComponent&, struct OnFireComponent&, class Optional<struct AbilitiesComponent const>);

    MCAPI static void
    _tickServerImpl(bool, class EntityContext&, class Actor&, struct OnFireComponent&, class optional_ref<struct AbilitiesComponent const>);

    // NOLINTEND
};
