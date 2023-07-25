#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockNotificationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKNOTIFICATIONEVENT
public:
    BlockNotificationEvent& operator=(BlockNotificationEvent const&) = delete;
    BlockNotificationEvent(BlockNotificationEvent const&)            = delete;
    BlockNotificationEvent()                                         = delete;
#endif

public:
    /**
     * @symbol ??1BlockNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~BlockNotificationEvent();
};
