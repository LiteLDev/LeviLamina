#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemCompleteUseEvent {

public:
    // prevent constructor by default
    ItemCompleteUseEvent& operator=(ItemCompleteUseEvent const&) = delete;
    ItemCompleteUseEvent(ItemCompleteUseEvent const&)            = delete;
    ItemCompleteUseEvent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ItemCompleteUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemCompleteUseEvent();
    // NOLINTEND
};
