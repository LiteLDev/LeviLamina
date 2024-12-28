#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ItemChargeEvent.h"

struct ItemReleaseUseEvent : public ::ItemChargeEvent {
public:
    // prevent constructor by default
    ItemReleaseUseEvent& operator=(ItemReleaseUseEvent const&);
    ItemReleaseUseEvent(ItemReleaseUseEvent const&);
    ItemReleaseUseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemReleaseUseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
