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

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClientEventCoordinatorManager@@UEAA@XZ
    virtual ~ClientEventCoordinatorManager() = default;

    // vIndex: 1, symbol:
    // ?getRemotePlayerEventCoordinator@ClientEventCoordinatorManager@@UEAA?AV?$StackRefResult@VPlayerEventCoordinator@@@@XZ
    virtual class StackRefResult<class PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    // vIndex: 2, symbol:
    // ?getClientPlayerEventCoordinator@ClientEventCoordinatorManager@@UEAA?AV?$StackRefResult@VClientPlayerEventCoordinator@@@@XZ
    virtual class StackRefResult<class ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    // vIndex: 4, symbol:
    // ?getLevelEventCoordinator@ClientEventCoordinatorManager@@UEAA?AV?$not_null@V?$StackRefResult@VLevelEventCoordinator@@@@@gsl@@XZ
    virtual gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator();

    // symbol: ??0ClientEventCoordinatorManager@@QEAA@XZ
    MCAPI ClientEventCoordinatorManager();

    // NOLINTEND
};
