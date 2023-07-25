#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseOnEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTOPUSEONEVENT
public:
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&) = delete;
    ItemStopUseOnEvent()                                     = delete;
#endif

public:
    /**
     * @symbol ??0ItemStopUseOnEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemStopUseOnEvent(struct ItemStopUseOnEvent const&);
    /**
     * @symbol ??1ItemStopUseOnEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemStopUseOnEvent();
};
