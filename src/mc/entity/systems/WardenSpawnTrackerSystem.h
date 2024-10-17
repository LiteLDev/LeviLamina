#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class WardenSpawnTrackerSystem {
public:
    // prevent constructor by default
    WardenSpawnTrackerSystem& operator=(WardenSpawnTrackerSystem const&);
    WardenSpawnTrackerSystem(WardenSpawnTrackerSystem const&);
    WardenSpawnTrackerSystem();

public:
    // NOLINTBEGIN
    MCVAPI ::EventResult onLevelAddedPlayer(class Level&, class Player& player);

    MCVAPI void tick(class EntityRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForITickingSystem();

    MCAPI static void** vftableForLevelEventListener();

    MCAPI ::EventResult onLevelAddedPlayer$(class Level&, class Player& player);

    MCAPI void tick$(class EntityRegistry& registry);

    // NOLINTEND
};
