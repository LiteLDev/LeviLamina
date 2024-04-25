#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/StackRefResult.h"

class EventCoordinatorManager {
public:
    // prevent constructor by default
    EventCoordinatorManager& operator=(EventCoordinatorManager const&);
    EventCoordinatorManager(EventCoordinatorManager const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EventCoordinatorManager@@UEAA@XZ
    virtual ~EventCoordinatorManager();

    // vIndex: 1, symbol:
    // ?getRemotePlayerEventCoordinator@EventCoordinatorManager@@UEAA?AV?$StackRefResult@VPlayerEventCoordinator@@@@XZ
    virtual class StackRefResult<class PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    // vIndex: 2, symbol:
    // ?getClientPlayerEventCoordinator@EventCoordinatorManager@@UEAA?AV?$StackRefResult@VClientPlayerEventCoordinator@@@@XZ
    virtual class StackRefResult<class ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    // vIndex: 3, symbol:
    // ?getServerPlayerEventCoordinator@EventCoordinatorManager@@UEAA?AV?$StackRefResult@VServerPlayerEventCoordinator@@@@XZ
    virtual class StackRefResult<class ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    // vIndex: 4, symbol:
    // ?getLevelEventCoordinator@ClientEventCoordinatorManager@@UEAA?AV?$not_null@V?$StackRefResult@VLevelEventCoordinator@@@@@gsl@@XZ
    virtual gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator() = 0;

    // vIndex: 5, symbol:
    // ?getServerLevelEventCoordinator@EventCoordinatorManager@@UEAA?AV?$StackRefResult@VServerLevelEventCoordinator@@@@XZ
    virtual class StackRefResult<class ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    // vIndex: 6, symbol:
    // ?getServerNetworkEventCoordinator@EventCoordinatorManager@@UEAA?AV?$StackRefResult@VServerNetworkEventCoordinator@@@@XZ
    virtual class StackRefResult<class ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();

    // symbol: ??0EventCoordinatorManager@@QEAA@XZ
    MCAPI EventCoordinatorManager();

    // symbol:
    // ?getActorEventCoordinator@EventCoordinatorManager@@QEAA?AV?$not_null@V?$StackRefResult@VActorEventCoordinator@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class ActorEventCoordinator>> getActorEventCoordinator();

    // symbol:
    // ?getBlockEventCoordinator@EventCoordinatorManager@@QEAA?AV?$not_null@V?$StackRefResult@VBlockEventCoordinator@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class BlockEventCoordinator>> getBlockEventCoordinator();

    // symbol:
    // ?getItemEventCoordinator@EventCoordinatorManager@@QEAA?AV?$not_null@V?$StackRefResult@VItemEventCoordinator@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class ItemEventCoordinator>> getItemEventCoordinator();

    // symbol:
    // ?getScriptDeferredEventCoordinator@EventCoordinatorManager@@QEAA?AV?$not_null@V?$StackRefResult@VScriptDeferredEventCoordinator@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class ScriptDeferredEventCoordinator>> getScriptDeferredEventCoordinator();

    // symbol:
    // ?getScriptingEventCoordinator@EventCoordinatorManager@@QEAA?AV?$not_null@V?$StackRefResult@VScriptingEventCoordinator@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class ScriptingEventCoordinator>> getScriptingEventCoordinator();

    // symbol: ?createEventCoordinatorManager@EventCoordinatorManager@@SA?AV?$OwnerPtr@VEventCoordinatorManager@@@@_N@Z
    MCAPI static class OwnerPtr<class EventCoordinatorManager> createEventCoordinatorManager(bool);

    // NOLINTEND
};
