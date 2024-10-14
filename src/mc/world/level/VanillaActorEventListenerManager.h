#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaActorEventListenerManager {
public:
    // prevent constructor by default
    VanillaActorEventListenerManager& operator=(VanillaActorEventListenerManager const&);
    VanillaActorEventListenerManager(VanillaActorEventListenerManager const&);

public:
    // NOLINTBEGIN
    MCAPI VanillaActorEventListenerManager();

    MCAPI void registerWithActorEventCoordinator(class ActorEventCoordinator& actorEventCoordinator);

    MCAPI ~VanillaActorEventListenerManager();

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
