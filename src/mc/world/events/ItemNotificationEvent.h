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
    // symbol: ??1ItemNotificationEvent@@QEAA@XZ
    MCAPI ~ItemNotificationEvent();

    // NOLINTEND
};
