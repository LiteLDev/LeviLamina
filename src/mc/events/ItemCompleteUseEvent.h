#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemCompleteUseEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPLETEUSEEVENT
public:
    ItemCompleteUseEvent& operator=(ItemCompleteUseEvent const&) = delete;
    ItemCompleteUseEvent(ItemCompleteUseEvent const&)            = delete;
    ItemCompleteUseEvent()                                       = delete;
#endif

public:
    /**
     * @symbol ??1ItemCompleteUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemCompleteUseEvent();
};
