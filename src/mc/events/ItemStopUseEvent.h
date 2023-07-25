#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTOPUSEEVENT
public:
    ItemStopUseEvent& operator=(ItemStopUseEvent const&) = delete;
    ItemStopUseEvent(ItemStopUseEvent const&)            = delete;
    ItemStopUseEvent()                                   = delete;
#endif

public:
    /**
     * @symbol ??1ItemStopUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemStopUseEvent();
};
