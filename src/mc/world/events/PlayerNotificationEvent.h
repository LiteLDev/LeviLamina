#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerNotificationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERNOTIFICATIONEVENT
public:
    PlayerNotificationEvent& operator=(PlayerNotificationEvent const&) = delete;
    PlayerNotificationEvent(PlayerNotificationEvent const&)            = delete;
    PlayerNotificationEvent()                                          = delete;
#endif

public:
    /**
     * @symbol ??1PlayerNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerNotificationEvent();
};
