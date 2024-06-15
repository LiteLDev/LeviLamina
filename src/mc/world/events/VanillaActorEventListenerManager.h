#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaActorEventListenerManager {
public:
    // prevent constructor by default
    VanillaActorEventListenerManager& operator=(VanillaActorEventListenerManager const&);
    VanillaActorEventListenerManager(VanillaActorEventListenerManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??0VanillaActorEventListenerManager@@QEAA@XZ
    MCAPI VanillaActorEventListenerManager();

    // symbol: ?registerWithActorEventCoordinator@VanillaActorEventListenerManager@@QEAAXAEAVActorEventCoordinator@@@Z
    MCAPI void registerWithActorEventCoordinator(class ActorEventCoordinator&);

    // symbol: ??1VanillaActorEventListenerManager@@QEAA@XZ
    MCAPI ~VanillaActorEventListenerManager();

    // NOLINTEND
};
