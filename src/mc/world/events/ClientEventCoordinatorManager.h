#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/events/EventCoordinatorManager.h"

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
};
