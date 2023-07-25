#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemChargeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCHARGEEVENT
public:
    ItemChargeEvent& operator=(ItemChargeEvent const&) = delete;
    ItemChargeEvent()                                  = delete;
#endif

public:
    /**
     * @symbol ??0ItemChargeEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent const&);
    /**
     * @symbol ??0ItemChargeEvent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent&&);
};
