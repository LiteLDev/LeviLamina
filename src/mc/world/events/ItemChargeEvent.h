#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemChargeEvent {

public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&) = delete;
    ItemChargeEvent()                                  = delete;

public:
    /**
     * @symbol ??0ItemChargeEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent const&); // NOLINT
    /**
     * @symbol ??0ItemChargeEvent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemChargeEvent(struct ItemChargeEvent&&); // NOLINT
};
