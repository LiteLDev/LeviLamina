#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
struct ClientInstanceNotificationEvent;
class ClientInstance;
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
