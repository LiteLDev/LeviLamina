#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemChargeEvent.h"

struct ItemStopUseEvent : public ::ItemChargeEvent {
public:
    // prevent constructor by default
    ItemStopUseEvent& operator=(ItemStopUseEvent const&);
    ItemStopUseEvent(ItemStopUseEvent const&);
    ItemStopUseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemStopUseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
