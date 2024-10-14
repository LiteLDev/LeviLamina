#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySensorComponent {
public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&);
    EntitySensorComponent(EntitySensorComponent const&);

public:
    // NOLINTBEGIN
    MCAPI EntitySensorComponent();

    MCAPI EntitySensorComponent(class EntitySensorComponent&&);

    MCAPI class EntitySensorComponent& operator=(class EntitySensorComponent&&);

    MCAPI void tick(class ActorOwnerComponent& actorOwnerComponent, struct Tick const& currentTick);

    MCAPI ~EntitySensorComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
