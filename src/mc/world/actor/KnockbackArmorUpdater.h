#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorEquippedArmorEvent;
// clang-format on

class KnockbackArmorUpdater : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 35
    virtual ::EventResult onEvent(::ActorEquippedArmorEvent const& actorEquippedArmorEvent) /*override*/;

    // vIndex: 0
    virtual ~KnockbackArmorUpdater() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorEquippedArmorEvent const& actorEquippedArmorEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
