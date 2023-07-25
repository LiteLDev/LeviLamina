#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseOnEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEONEVENT
public:
    ItemUseOnEvent& operator=(ItemUseOnEvent const&) = delete;
    ItemUseOnEvent()                                 = delete;
#endif

public:
    /**
     * @symbol ??0ItemUseOnEvent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent&&);
    /**
     * @symbol ??0ItemUseOnEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemUseOnEvent(struct ItemUseOnEvent const&);
    /**
     * @symbol ??1ItemUseOnEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemUseOnEvent();
};
