#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

class ServerInstanceEventHandler : public ::GameplayHandler {
public:
    // prevent constructor by default
    ServerInstanceEventHandler& operator=(ServerInstanceEventHandler const&);
    ServerInstanceEventHandler(ServerInstanceEventHandler const&);
    ServerInstanceEventHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerInstanceEventHandler() /*override*/;

    // vIndex: 1
    virtual ::HandlerResult handleEvent(::ServerInstanceGameplayEvent<void> const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
