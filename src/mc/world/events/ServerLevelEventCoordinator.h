#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelEventCoordinator.h"

class ServerLevelEventCoordinator : public ::LevelEventCoordinator {
public:
    // prevent constructor by default
    ServerLevelEventCoordinator& operator=(ServerLevelEventCoordinator const&);
    ServerLevelEventCoordinator(ServerLevelEventCoordinator const&);
    ServerLevelEventCoordinator();

public:
    // NOLINTBEGIN
    // symbol: ?sendLevelAddedPlayer@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVPlayer@@@Z
    MCAPI void sendLevelAddedPlayer(class Level&, class Player&);

    // symbol: ?sendLevelRemovedPlayer@ServerLevelEventCoordinator@@QEAAXAEAVLevel@@AEAVPlayer@@@Z
    MCAPI void sendLevelRemovedPlayer(class Level&, class Player&);

    // NOLINTEND
};
