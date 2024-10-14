#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/LevelEventCoordinator.h"

class ServerLevelEventCoordinator : public ::LevelEventCoordinator {
public:
    // prevent constructor by default
    ServerLevelEventCoordinator& operator=(ServerLevelEventCoordinator const&);
    ServerLevelEventCoordinator(ServerLevelEventCoordinator const&);
    ServerLevelEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerLevelEventCoordinator() = default;

    MCAPI void sendLevelAddedPlayer(class Level& level, class Player& player);

    MCAPI void sendLevelRemovedPlayer(class Level& level, class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
