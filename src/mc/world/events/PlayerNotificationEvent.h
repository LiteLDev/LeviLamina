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
    MCAPI ~PlayerNotificationEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
