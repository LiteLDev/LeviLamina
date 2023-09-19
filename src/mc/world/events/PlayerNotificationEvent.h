#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerNotificationEvent {
public:
    // prevent constructor by default
    PlayerNotificationEvent& operator=(PlayerNotificationEvent const&);
    PlayerNotificationEvent(PlayerNotificationEvent const&);
    PlayerNotificationEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1PlayerNotificationEvent@@QEAA@XZ
    MCAPI ~PlayerNotificationEvent();

    // NOLINTEND
};
