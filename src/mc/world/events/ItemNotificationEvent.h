#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemNotificationEvent {

public:
    // prevent constructor by default
    ItemNotificationEvent& operator=(ItemNotificationEvent const&) = delete;
    ItemNotificationEvent(ItemNotificationEvent const&)            = delete;
    ItemNotificationEvent()                                        = delete;

public:
    /**
     * @symbol ??1ItemNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemNotificationEvent(); // NOLINT
};
