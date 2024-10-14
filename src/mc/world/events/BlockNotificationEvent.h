#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockNotificationEvent {
public:
    // prevent constructor by default
    BlockNotificationEvent& operator=(BlockNotificationEvent const&);
    BlockNotificationEvent(BlockNotificationEvent const&);
    BlockNotificationEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BlockNotificationEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
