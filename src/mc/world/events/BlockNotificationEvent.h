#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockNotificationEvent {

public:
    // prevent constructor by default
    BlockNotificationEvent& operator=(BlockNotificationEvent const&) = delete;
    BlockNotificationEvent(BlockNotificationEvent const&)            = delete;
    BlockNotificationEvent()                                         = delete;

public:
    /**
     * @symbol ??1BlockNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~BlockNotificationEvent(); // NOLINT
};
