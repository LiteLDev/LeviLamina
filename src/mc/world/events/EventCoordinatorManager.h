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
    // vIndex: 0
    virtual ~EventCoordinatorManager();

    // vIndex: 1
    virtual class StackRefResult<class PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    // vIndex: 2
    virtual class StackRefResult<class ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    // vIndex: 3
    virtual class StackRefResult<class ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    // vIndex: 4
    virtual gsl::not_null<class StackRefResult<class LevelEventCoordinator>> getLevelEventCoordinator() = 0;

    // vIndex: 5
    virtual class StackRefResult<class ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    // vIndex: 6
    virtual class StackRefResult<class ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();

    MCAPI EventCoordinatorManager();

    MCAPI gsl::not_null<class StackRefResult<class ActorEventCoordinator>> getActorEventCoordinator();

    MCAPI gsl::not_null<class StackRefResult<class BlockEventCoordinator>> getBlockEventCoordinator();

    MCAPI gsl::not_null<class StackRefResult<class ItemEventCoordinator>> getItemEventCoordinator();

    MCAPI gsl::not_null<class StackRefResult<class ScriptDeferredEventCoordinator>> getScriptDeferredEventCoordinator();

    MCAPI gsl::not_null<class StackRefResult<class ScriptingEventCoordinator>> getScriptingEventCoordinator();

    MCAPI static class OwnerPtr<class EventCoordinatorManager> createEventCoordinatorManager(bool);

    // NOLINTEND
};
