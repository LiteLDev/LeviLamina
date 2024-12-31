#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
struct ActorEquippedArmorEvent;
// clang-format on

class KnockbackArmorUpdater : public ::EventListenerDispatcher<::ActorEventListener> {
public:
    // prevent constructor by default
    KnockbackArmorUpdater& operator=(KnockbackArmorUpdater const&);
    KnockbackArmorUpdater(KnockbackArmorUpdater const&);
    KnockbackArmorUpdater();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 33
    virtual ::EventResult onEvent(::ActorEquippedArmorEvent const& actorEquippedArmorEvent) /*override*/;

    // vIndex: 0
    virtual ~KnockbackArmorUpdater() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onEvent(::ActorEquippedArmorEvent const& actorEquippedArmorEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
