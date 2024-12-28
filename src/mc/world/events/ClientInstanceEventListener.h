#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
class Level;
class Minecraft;
struct ClientInstanceNotificationEvent;
// clang-format on

class ClientInstanceEventListener {
public:
    // prevent constructor by default
    ClientInstanceEventListener& operator=(ClientInstanceEventListener const&);
    ClientInstanceEventListener(ClientInstanceEventListener const&);
    ClientInstanceEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInstanceEventListener();

    // vIndex: 1
    virtual ::EventResult onClientInitializeStart(::ClientInstance&);

    // vIndex: 2
    virtual ::EventResult onClientInitializeEnd(::ClientInstance&);

    // vIndex: 3
    virtual ::EventResult onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    // vIndex: 4
    virtual ::EventResult onClientCreatedLevel(::ClientInstance&, ::Level&);

    // vIndex: 5
    virtual ::EventResult onClientUpdateStart(::ClientInstance&);

    // vIndex: 6
    virtual ::EventResult onClientUpdateEnd(::ClientInstance&);

    // vIndex: 7
    virtual ::EventResult onClientSuspend(::ClientInstance&);

    // vIndex: 8
    virtual ::EventResult onClientEnteredWorld(::ClientInstance&);

    // vIndex: 9
    virtual ::EventResult onStartLeaveGame(::ClientInstance&);

    // vIndex: 10
    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onClientInitializeStart(::ClientInstance&);

    MCAPI ::EventResult $onClientInitializeEnd(::ClientInstance&);

    MCAPI ::EventResult $onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    MCAPI ::EventResult $onClientCreatedLevel(::ClientInstance&, ::Level&);

    MCAPI ::EventResult $onClientUpdateStart(::ClientInstance&);

    MCAPI ::EventResult $onClientUpdateEnd(::ClientInstance&);

    MCAPI ::EventResult $onClientSuspend(::ClientInstance&);

    MCAPI ::EventResult $onClientEnteredWorld(::ClientInstance&);

    MCAPI ::EventResult $onStartLeaveGame(::ClientInstance&);

    MCAPI ::EventResult $onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND
};
