#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

class ServerInstance;

class ServerInstanceEventCoordinator {
public:
    // prevent constructor by default
    ServerInstanceEventCoordinator& operator=(ServerInstanceEventCoordinator const&);
    ServerInstanceEventCoordinator(ServerInstanceEventCoordinator const&);
    ServerInstanceEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerInstanceEventCoordinator() = default;

    MCAPI void registerServerInstanceEventHandler(std::unique_ptr<class ServerInstanceEventHandler>&& handler);

    MCAPI void sendEvent(class EventRef<struct ServerInstanceGameplayEvent<void>> const& event);

    MCAPI void sendServerInitializeEnd(class ServerInstance& instance);

    MCAPI void sendServerInitializeStart(class ServerInstance& instance);

    MCAPI void sendServerLevelInitialized(class ServerInstance& instance, class Level& level);

    MCAPI void sendServerMinecraftInitialized(
        class ServerInstance&                               instance,
        Bedrock::NotNullNonOwnerPtr<class Minecraft> const& minecraft
    );

    MCAPI void sendServerThreadStarted(class ServerInstance& instance);

    MCAPI void sendServerThreadStopped(class ServerInstance& instance);

    MCAPI void sendServerUpdateEnd(class ServerInstance& instance);

    MCAPI void sendServerUpdateStart(class ServerInstance& instance);

    MCAPI void sendStartLeaveGame(class ServerInstance& instance);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
