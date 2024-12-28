#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemChargeEvent.h"

struct ItemCompleteUseEvent : public ::ItemChargeEvent {
public:
    // prevent constructor by default
    ItemCompleteUseEvent& operator=(ItemCompleteUseEvent const&);
    ItemCompleteUseEvent(ItemCompleteUseEvent const&);
    ItemCompleteUseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemCompleteUseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
