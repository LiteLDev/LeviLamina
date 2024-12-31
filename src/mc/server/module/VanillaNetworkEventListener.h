#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
class PlayerEventListener;
struct PlayerDamageEvent;
// clang-format on

class VanillaNetworkEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                    public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // prevent constructor by default
    VanillaNetworkEventListener& operator=(VanillaNetworkEventListener const&);
    VanillaNetworkEventListener(VanillaNetworkEventListener const&);
    VanillaNetworkEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 63
    virtual ::EventResult onEvent(::PlayerDamageEvent const&) /*override*/;

    // vIndex: 0
    virtual ~VanillaNetworkEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
