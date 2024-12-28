#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
class ServerInstance;
class ServerInstanceEventHandler;
class ServerInstanceEventListener;
// clang-format on

class ServerInstanceEventCoordinator : public ::EventCoordinator<::ServerInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerInstanceEventHandler>> mServerInstanceEventHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceEventCoordinator& operator=(ServerInstanceEventCoordinator const&);
    ServerInstanceEventCoordinator(ServerInstanceEventCoordinator const&);
    ServerInstanceEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerInstanceEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerServerInstanceEventHandler(::std::unique_ptr<::ServerInstanceEventHandler>&& handler);

    MCAPI void sendEvent(::EventRef<::ServerInstanceGameplayEvent<void>> const& event);

    MCAPI void sendServerInitializeEnd(::ServerInstance& instance);

    MCAPI void sendServerInitializeStart(::ServerInstance& instance);

    MCAPI void sendServerLevelInitialized(::ServerInstance& instance, ::Level& level);

    MCAPI void sendServerMinecraftInitialized(
        ::ServerInstance&                                 instance,
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft
    );

    MCAPI void sendServerThreadStarted(::ServerInstance& instance);

    MCAPI void sendServerThreadStopped(::ServerInstance& instance);

    MCAPI void sendServerUpdateEnd(::ServerInstance& instance);

    MCAPI void sendServerUpdateStart(::ServerInstance& instance);

    MCAPI void sendStartLeaveGame(::ServerInstance& instance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
