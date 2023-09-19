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
    // symbol: ??1BlockNotificationEvent@@QEAA@XZ
    MCAPI ~BlockNotificationEvent();

    // NOLINTEND
};
