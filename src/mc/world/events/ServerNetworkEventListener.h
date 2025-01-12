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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkEventListener() = default;

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
