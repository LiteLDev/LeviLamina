#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventHandler;
class ServerNetworkEventListener;
// clang-format on

class ServerNetworkEventCoordinator : public ::EventCoordinator<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerNetworkEventHandler>> mServerNetworkEventHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerServerNetworkEventHandler(::std::unique_ptr<::ServerNetworkEventHandler>&& handler);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<::MutableServerNetworkGameplayEvent<::CoordinatorResult>> event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
