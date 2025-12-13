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
#ifdef LL_PLAT_S
    virtual ~ClientInstanceEventListener() = default;
#else // LL_PLAT_C
    virtual ~ClientInstanceEventListener();
#endif

    virtual ::EventResult onClientInitializeStart(::ClientInstance& instance);

    virtual ::EventResult onClientInitializeEnd(::ClientInstance& instance);

    virtual ::EventResult onClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    virtual ::EventResult onClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    virtual ::EventResult onClientUpdateStart(::ClientInstance& instance);

    virtual ::EventResult onClientUpdateEnd(::ClientInstance& instance);

    virtual ::EventResult onClientSuspend(::ClientInstance& instance);

    virtual ::EventResult onClientEnteredWorld(::ClientInstance& instance);

    virtual ::EventResult onStartLeaveGame(::ClientInstance& instance);

    virtual ::EventResult onEvent(::ClientInstanceNotificationEvent const& playerViewPerspectiveChangedEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::EventResult $onClientInitializeStart(::ClientInstance& instance);

    MCNAPI ::EventResult $onClientInitializeEnd(::ClientInstance& instance);

    MCNAPI ::EventResult $onClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    MCNAPI ::EventResult $onClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    MCNAPI ::EventResult $onClientUpdateStart(::ClientInstance& instance);

    MCNAPI ::EventResult $onClientUpdateEnd(::ClientInstance& instance);

    MCNAPI ::EventResult $onClientSuspend(::ClientInstance& instance);

    MCNAPI ::EventResult $onClientEnteredWorld(::ClientInstance& instance);

    MCNAPI ::EventResult $onStartLeaveGame(::ClientInstance& instance);

    MCNAPI ::EventResult $onEvent(::ClientInstanceNotificationEvent const& playerViewPerspectiveChangedEvent);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
