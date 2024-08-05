#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/events/EventCoordinatorManager.h"

class ServerEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // prevent constructor by default
    ServerEventCoordinatorManager& operator=(ServerEventCoordinatorManager const&);
    ServerEventCoordinatorManager(ServerEventCoordinatorManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerEventCoordinatorManager() = default;

    // vIndex: 3
    virtual class StackRefResult<class ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    // vIndex: 4
    virtual gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator();

    // vIndex: 5
    virtual class StackRefResult<class ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    // vIndex: 6
    virtual class StackRefResult<class ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();

    MCAPI ServerEventCoordinatorManager();

    // NOLINTEND
};
