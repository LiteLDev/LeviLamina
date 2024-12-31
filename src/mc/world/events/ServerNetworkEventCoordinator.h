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
struct DiagnosticsEvent;
struct MessageEvent;
// clang-format on

class ServerNetworkEventCoordinator : public ::EventCoordinator<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95fe88;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerNetworkEventCoordinator& operator=(ServerNetworkEventCoordinator const&);
    ServerNetworkEventCoordinator(ServerNetworkEventCoordinator const&);
    ServerNetworkEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerNetworkEventHandler& getServerNetworkEventHandler();

    MCAPI void registerServerNetworkEventHandler(::std::unique_ptr<::ServerNetworkEventHandler>&& handler);

    MCAPI void sendDiagnostics(::DiagnosticsEvent& diagnosticsEvent);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableServerNetworkGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendMessage(::MessageEvent& messageEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
