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

    virtual ::EventResult onClientEnteredWorld(::ClientInstance& instance);

    virtual ::EventResult onStartLeaveGame(::ClientInstance& client);

    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onClientInitializeStart(::ClientInstance&);

    MCNAPI ::EventResult $onClientInitializeEnd(::ClientInstance&);

    MCNAPI ::EventResult $onClientMinecraftInitialized(::ClientInstance&, ::Minecraft&);

    MCNAPI ::EventResult $onClientCreatedLevel(::ClientInstance& client, ::Level& level);

    MCNAPI ::EventResult $onClientUpdateStart(::ClientInstance& instance);

    MCNAPI ::EventResult $onClientUpdateEnd(::ClientInstance&);

    MCNAPI ::EventResult $onClientSuspend(::ClientInstance&);

    MCNAPI ::EventResult $onClientEnteredWorld(::ClientInstance& instance);

    MCNAPI ::EventResult $onStartLeaveGame(::ClientInstance& client);

    MCNAPI ::EventResult $onEvent(::ClientInstanceNotificationEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
