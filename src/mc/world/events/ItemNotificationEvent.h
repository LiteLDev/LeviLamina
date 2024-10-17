#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemNotificationEvent {
public:
    // prevent constructor by default
    ItemNotificationEvent& operator=(ItemNotificationEvent const&);
    ItemNotificationEvent(ItemNotificationEvent const&);
    ItemNotificationEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ItemNotificationEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
