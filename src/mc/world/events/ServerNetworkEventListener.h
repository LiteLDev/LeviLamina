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
    virtual ~ServerNetworkEventListener() = default;

    virtual ::EventResult onEvent(::ServerNetworkGameplayNotificationEvent const& event);

    virtual ::EventResult onMessage(::MessageEvent const& messageEvent);

    virtual ::EventResult onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const& event);

    MCFOLD ::EventResult $onMessage(::MessageEvent const& messageEvent);

    MCFOLD ::EventResult $onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);


    // NOLINTEND
};
