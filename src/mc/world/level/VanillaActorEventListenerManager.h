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
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
