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
    // vIndex: 0, symbol: __gen_??1ServerEventCoordinatorManager@@UEAA@XZ
    virtual ~ServerEventCoordinatorManager() = default;

    // vIndex: 3, symbol:
    // ?getServerPlayerEventCoordinator@ServerEventCoordinatorManager@@UEAA?AV?$StackRefResult@VServerPlayerEventCoordinator@@@@XZ
    virtual class StackRefResult<class ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    // vIndex: 4, symbol:
    // ?getLevelEventCoordinator@ServerEventCoordinatorManager@@UEAA?AV?$not_null@V?$StackRefResult@VLevelEventCoordinator@@@@@gsl@@XZ
    virtual gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator();

    // vIndex: 5, symbol:
    // ?getServerLevelEventCoordinator@ServerEventCoordinatorManager@@UEAA?AV?$StackRefResult@VServerLevelEventCoordinator@@@@XZ
    virtual class StackRefResult<class ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    // vIndex: 6, symbol:
    // ?getServerNetworkEventCoordinator@ServerEventCoordinatorManager@@UEAA?AV?$StackRefResult@VServerNetworkEventCoordinator@@@@XZ
    virtual class StackRefResult<class ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();

    // symbol: ??0ServerEventCoordinatorManager@@QEAA@XZ
    MCAPI ServerEventCoordinatorManager();

    // NOLINTEND
};
