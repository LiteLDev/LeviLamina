#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct DiagnosticsEvent;
struct MessageEvent;
struct ServerNetworkGameplayNotificationEvent;
// clang-format on

class ServerNetworkEventListener {
public:
    // ServerNetworkEventListener inner types define
    using EventType = ::ServerNetworkGameplayNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerNetworkEventListener();

    virtual ::EventResult onEvent(::ServerNetworkGameplayNotificationEvent const&);

    virtual ::EventResult onMessage(::MessageEvent const&);

    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const&);

    MCFOLD ::EventResult $onMessage(::MessageEvent const&);

    MCFOLD ::EventResult $onDiagnostics(::DiagnosticsEvent const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
