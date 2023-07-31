#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseEvent {

public:
    // prevent constructor by default
    ItemStopUseEvent& operator=(ItemStopUseEvent const&) = delete;
    ItemStopUseEvent(ItemStopUseEvent const&)            = delete;
    ItemStopUseEvent()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ItemStopUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemStopUseEvent();
    // NOLINTEND
};
