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

class ScriptPartiesEventListener : public ::EventListenerDispatcher<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka291f8;
    ::ll::UntypedStorage<8, 16> mUnk928cd5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartiesEventListener& operator=(ScriptPartiesEventListener const&);
    ScriptPartiesEventListener(ScriptPartiesEventListener const&);
    ScriptPartiesEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onPartyChanged(::PartyChangedEvent const&) /*override*/;

    virtual ::EventResult onPartyDestinationCookieResponse(::PartyDestinationCookieResponseEvent const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleParties
