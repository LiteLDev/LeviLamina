#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStartUseEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTARTUSEEVENT
public:
    ItemStartUseEvent& operator=(ItemStartUseEvent const&) = delete;
    ItemStartUseEvent(ItemStartUseEvent const&)            = delete;
    ItemStartUseEvent()                                    = delete;
#endif

public:
    /**
     * @symbol ??1ItemStartUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemStartUseEvent();
};
