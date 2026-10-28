#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
struct MatchmakingTicketCancelRequestedEvent;
// clang-format on

namespace ScriptLiveEventsUtilities {

class ScriptLiveEventsUtilitiesGlobalEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6044fd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLiveEventsUtilitiesGlobalEventListener& operator=(ScriptLiveEventsUtilitiesGlobalEventListener const&);
    ScriptLiveEventsUtilitiesGlobalEventListener(ScriptLiveEventsUtilitiesGlobalEventListener const&);
    ScriptLiveEventsUtilitiesGlobalEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult
    onMatchmakingTicketCancelRequested(::MatchmakingTicketCancelRequestedEvent const& event) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onMatchmakingTicketCancelRequested(::MatchmakingTicketCancelRequestedEvent const& event);


    // NOLINTEND
};

} // namespace ScriptLiveEventsUtilities
