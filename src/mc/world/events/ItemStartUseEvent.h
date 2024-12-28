#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemChargeEvent.h"

struct ItemStartUseEvent : public ::ItemChargeEvent {
public:
    // prevent constructor by default
    ItemStartUseEvent& operator=(ItemStartUseEvent const&);
    ItemStartUseEvent(ItemStartUseEvent const&);
    ItemStartUseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemStartUseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
