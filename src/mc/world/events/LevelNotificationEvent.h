#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelNotificationEvent {

public:
    // prevent constructor by default
    LevelNotificationEvent& operator=(LevelNotificationEvent const&) = delete;
    LevelNotificationEvent(LevelNotificationEvent const&)            = delete;
    LevelNotificationEvent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1LevelNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~LevelNotificationEvent();
    // NOLINTEND
};
