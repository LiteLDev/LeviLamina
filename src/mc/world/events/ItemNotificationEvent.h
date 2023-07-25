#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemNotificationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMNOTIFICATIONEVENT
public:
    ItemNotificationEvent& operator=(ItemNotificationEvent const&) = delete;
    ItemNotificationEvent(ItemNotificationEvent const&)            = delete;
    ItemNotificationEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??1ItemNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemNotificationEvent();
};
