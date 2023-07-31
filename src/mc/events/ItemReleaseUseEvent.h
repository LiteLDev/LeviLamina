#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemReleaseUseEvent {

public:
    // prevent constructor by default
    ItemReleaseUseEvent& operator=(ItemReleaseUseEvent const&) = delete;
    ItemReleaseUseEvent(ItemReleaseUseEvent const&)            = delete;
    ItemReleaseUseEvent()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ItemReleaseUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemReleaseUseEvent();
    // NOLINTEND
};
