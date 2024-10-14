#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/EventCoordinatorManager.h"

class ClientEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // prevent constructor by default
    ClientEventCoordinatorManager& operator=(ClientEventCoordinatorManager const&);
    ClientEventCoordinatorManager(ClientEventCoordinatorManager const&);
    ClientEventCoordinatorManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientEventCoordinatorManager() = default;

    // vIndex: 1
    virtual class StackRefResult<class PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    // vIndex: 2
    virtual class StackRefResult<class ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    // vIndex: 4
    virtual gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class StackRefResult<class ClientPlayerEventCoordinator> getClientPlayerEventCoordinator$();

    MCAPI gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator$();

    MCAPI class StackRefResult<class PlayerEventCoordinator> getRemotePlayerEventCoordinator$();

    // NOLINTEND
};
