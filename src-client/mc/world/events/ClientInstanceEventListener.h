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
    virtual ~ClientInstanceEventListener() = default;

    virtual ::EventResult onClientInitializeStart(::ClientInstance&);

    virtual ::EventResult onClientInitializeEnd(::ClientInstance&);

    virtual ::EventResult onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    virtual ::EventResult onClientCreatedLevel(::ClientInstance& client, ::Level& level);

    virtual ::EventResult onClientUpdateStart(::ClientInstance& instance);

    virtual ::EventResult onClientUpdateEnd(::ClientInstance&);

    virtual ::EventResult onClientSuspend(::ClientInstance&);

    virtual ::EventResult onClientEnteredWorld(::ClientInstance& clientInstance);

    virtual ::EventResult onStartLeaveGame(::ClientInstance& client);

    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onClientInitializeStart(::ClientInstance&);

    MCFOLD ::EventResult $onClientInitializeEnd(::ClientInstance&);

    MCFOLD ::EventResult $onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    MCFOLD ::EventResult $onClientCreatedLevel(::ClientInstance& client, ::Level& level);

    MCFOLD ::EventResult $onClientUpdateStart(::ClientInstance& instance);

    MCFOLD ::EventResult $onClientUpdateEnd(::ClientInstance&);

    MCFOLD ::EventResult $onClientSuspend(::ClientInstance&);

    MCFOLD ::EventResult $onClientEnteredWorld(::ClientInstance& clientInstance);

    MCFOLD ::EventResult $onStartLeaveGame(::ClientInstance& client);

    MCFOLD ::EventResult $onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
