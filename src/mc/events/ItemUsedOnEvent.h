#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUsedOnEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEDONEVENT
public:
    ItemUsedOnEvent& operator=(ItemUsedOnEvent const&) = delete;
    ItemUsedOnEvent(ItemUsedOnEvent const&)            = delete;
    ItemUsedOnEvent()                                  = delete;
#endif

public:
    /**
     * @symbol ??1ItemUsedOnEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemUsedOnEvent();
};
