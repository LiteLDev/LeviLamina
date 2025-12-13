#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Level;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstanceEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendEvent(::EventRef<::ServerInstanceGameplayEvent<void>> const& event);

    MCAPI void sendServerInitializeEnd(::ServerInstance& instance);

    MCAPI void sendServerLevelInitialized(::ServerInstance& instance, ::Level& level);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
