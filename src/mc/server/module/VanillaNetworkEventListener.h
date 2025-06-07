#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
struct PlayerDamageEvent;
// clang-format on

class VanillaNetworkEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                    public ::EventListenerDispatcher<::PlayerEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 63
    virtual ::EventResult onEvent(::PlayerDamageEvent const&) /*override*/;

    // vIndex: 0
    virtual ~VanillaNetworkEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
