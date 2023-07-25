#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelNotificationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELNOTIFICATIONEVENT
public:
    LevelNotificationEvent& operator=(LevelNotificationEvent const&) = delete;
    LevelNotificationEvent(LevelNotificationEvent const&)            = delete;
    LevelNotificationEvent()                                         = delete;
#endif

public:
    /**
     * @symbol ??1LevelNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~LevelNotificationEvent();
};
