#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ServerNetworkEventListener.h"

// auto generated forward declare list
// clang-format off
struct PartyChangedEvent;
struct PartyDestinationCookieResponseEvent;
// clang-format on

namespace ScriptModuleParties {

class ScriptPartiesGlobalEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7cc856;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartiesGlobalEventListener& operator=(ScriptPartiesGlobalEventListener const&);
    ScriptPartiesGlobalEventListener(ScriptPartiesGlobalEventListener const&);
    ScriptPartiesGlobalEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onPartyChanged(::PartyChangedEvent const& event) /*override*/;

    virtual ::EventResult
    onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onPartyChanged(::PartyChangedEvent const& event);

    MCNAPI ::EventResult $onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const& event);


    // NOLINTEND
};

} // namespace ScriptModuleParties
