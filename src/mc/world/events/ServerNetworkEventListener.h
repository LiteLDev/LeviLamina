#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct DiagnosticsEvent;
struct MatchmakingTicketCancelRequestedEvent;
struct MessageEvent;
struct PartyChangedEvent;
struct PartyDestinationCookieResponseEvent;
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

    virtual ::EventResult onPartyChanged(::PartyChangedEvent const& event);

    virtual ::EventResult onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event);

    virtual ::EventResult onMatchmakingTicketCancelRequested(::MatchmakingTicketCancelRequestedEvent const& event);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ServerNetworkGameplayNotificationEvent const& event);

    MCNAPI ::EventResult $onMessage(::MessageEvent const& messageEvent);

    MCNAPI ::EventResult $onDiagnostics(::DiagnosticsEvent const& diagnosticsEvent);

    MCNAPI ::EventResult $onPartyChanged(::PartyChangedEvent const& event);

    MCNAPI ::EventResult $onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event);

    MCNAPI ::EventResult $onMatchmakingTicketCancelRequested(::MatchmakingTicketCancelRequestedEvent const& event);


    // NOLINTEND
};
