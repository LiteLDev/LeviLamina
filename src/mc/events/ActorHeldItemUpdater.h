#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorCarriedItemChangedEvent;
// clang-format on

class ActorHeldItemUpdater : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ActorCarriedItemChangedEvent const& actorCarriedItemChangedEvent) /*override*/;

    virtual ~ActorHeldItemUpdater() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ActorCarriedItemChangedEvent const& actorCarriedItemChangedEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
