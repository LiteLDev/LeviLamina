#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelNotificationEvent {
public:
    // prevent constructor by default
    LevelNotificationEvent& operator=(LevelNotificationEvent const&);
    LevelNotificationEvent(LevelNotificationEvent const&);
    LevelNotificationEvent();

public:
    // NOLINTBEGIN
    MCAPI ~LevelNotificationEvent();

    // NOLINTEND
};
