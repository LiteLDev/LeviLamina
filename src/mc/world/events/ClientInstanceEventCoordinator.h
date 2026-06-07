#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientInstanceGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"

// auto generated forward declare list
// clang-format off
class Level;
class Minecraft;
class ClientInstance;
class ClientInstanceEventHandler;
class ClientInstanceEventListener;
// clang-format on

class ClientInstanceEventCoordinator : public ::EventCoordinator<::ClientInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInstanceEventHandler>> mClientInstanceGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ClientInstanceEventCoordinator() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ClientInstanceEventCoordinator() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void registerClientInstanceEventHandler(::std::unique_ptr<::ClientInstanceEventHandler> handler);

    MCAPI void sendClientCreatedLevel(::ClientInstance& instance, ::Level& level);

    MCAPI void sendClientEnteredWorld(::ClientInstance& instance);

    MCAPI void sendClientInitializeEnd(::ClientInstance& instance);

    MCAPI void sendClientInitializeStart(::ClientInstance& instance);

    MCAPI void sendClientMinecraftInitialized(::ClientInstance& instance, ::Minecraft& minecraft);

    MCAPI void sendClientSuspend(::ClientInstance& instance);

    MCAPI void sendClientUpdateEnd(::ClientInstance& instance);

    MCAPI void sendClientUpdateStart(::ClientInstance& instance);

    MCAPI void sendEvent(::EventRef<::ClientInstanceGameplayEvent<void>> const& event);

    MCAPI void sendStartLeaveGame(::ClientInstance& instance);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
