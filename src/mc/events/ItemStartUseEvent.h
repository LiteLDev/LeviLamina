#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStartUseEvent {

public:
    // prevent constructor by default
    ItemStartUseEvent& operator=(ItemStartUseEvent const&) = delete;
    ItemStartUseEvent(ItemStartUseEvent const&)            = delete;
    ItemStartUseEvent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ItemStartUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemStartUseEvent();
    // NOLINTEND
};
