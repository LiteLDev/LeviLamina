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
    // symbol: ?onLevelAddedPlayer@WardenSpawnTrackerSystem@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelAddedPlayer(class Level& level, class Player& player);

    // symbol: ?tick@WardenSpawnTrackerSystem@@UEAAXAEAVEntityRegistry@@@Z
    MCVAPI void tick(class EntityRegistry& registry);

    // NOLINTEND
};
