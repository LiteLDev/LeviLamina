#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseOnEvent {

public:
    // prevent constructor by default
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&) = delete;
    ItemStopUseOnEvent()                                     = delete;

public:
    /**
     * @symbol ??0ItemStopUseOnEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemStopUseOnEvent(struct ItemStopUseOnEvent const&); // NOLINT
    /**
     * @symbol ??1ItemStopUseOnEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemStopUseOnEvent(); // NOLINT
};
