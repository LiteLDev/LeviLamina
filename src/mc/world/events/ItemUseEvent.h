#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEEVENT
public:
    ItemUseEvent& operator=(ItemUseEvent const&) = delete;
    ItemUseEvent()                               = delete;
#endif

public:
    /**
     * @symbol ??0ItemUseEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemUseEvent(struct ItemUseEvent const&);
    /**
     * @symbol ??1ItemUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemUseEvent();
};
