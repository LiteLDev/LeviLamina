#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerNotificationEvent {

public:
    // prevent constructor by default
    PlayerNotificationEvent& operator=(PlayerNotificationEvent const&) = delete;
    PlayerNotificationEvent(PlayerNotificationEvent const&)            = delete;
    PlayerNotificationEvent()                                          = delete;

public:
    /**
     * @symbol ??1PlayerNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerNotificationEvent(); // NOLINT
};
