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
    // vIndex: 0
    virtual ~ServerNetworkEventListener();

    // vIndex: 1
    virtual ::EventResult onEvent(::ServerNetworkGameplayNotificationEvent const&);

    // vIndex: 2
    virtual ::EventResult onMessage(::MessageEvent const&);

    // vIndex: 3
    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const&);

    MCNAPI ::EventResult $onMessage(::MessageEvent const&);

    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
