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
    // ClientInstanceEventListener inner types define
    using EventType = ::ClientInstanceNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInstanceEventListener();

    // vIndex: 1
    virtual ::EventResult onClientInitializeStart(::ClientInstance& instance);

    // vIndex: 2
    virtual ::EventResult onClientInitializeEnd(::ClientInstance& instance);

    // vIndex: 3
    virtual ::EventResult onClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    // vIndex: 4
    virtual ::EventResult onClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    // vIndex: 5
    virtual ::EventResult onClientUpdateStart(::ClientInstance& instance);

    // vIndex: 6
    virtual ::EventResult onClientUpdateEnd(::ClientInstance& instance);

    // vIndex: 7
    virtual ::EventResult onClientSuspend(::ClientInstance& instance);

    // vIndex: 8
    virtual ::EventResult onClientEnteredWorld(::ClientInstance& instance);

    // vIndex: 9
    virtual ::EventResult onStartLeaveGame(::ClientInstance& instance);

    // vIndex: 10
    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const& playerViewPerspectiveChangedEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onClientInitializeStart(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientInitializeEnd(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    MCFOLD ::EventResult $onClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    MCFOLD ::EventResult $onClientUpdateStart(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientUpdateEnd(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientSuspend(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientEnteredWorld(::ClientInstance& instance);

    MCFOLD ::EventResult $onStartLeaveGame(::ClientInstance& instance);

    MCFOLD ::EventResult $onEvent(::ClientInstanceNotificationEvent const& playerViewPerspectiveChangedEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
