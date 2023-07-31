#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockNotificationEvent {

public:
    // prevent constructor by default
    BlockNotificationEvent& operator=(BlockNotificationEvent const&) = delete;
    BlockNotificationEvent(BlockNotificationEvent const&)            = delete;
    BlockNotificationEvent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1BlockNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~BlockNotificationEvent();
    // NOLINTEND
};
