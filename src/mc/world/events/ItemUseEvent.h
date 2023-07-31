#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemUseEvent {

public:
    // prevent constructor by default
    ItemUseEvent& operator=(ItemUseEvent const&) = delete;
    ItemUseEvent()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ItemUseEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ItemUseEvent(struct ItemUseEvent const&);
    /**
     * @symbol ??1ItemUseEvent\@\@QEAA\@XZ
     */
    MCAPI ~ItemUseEvent();
    // NOLINTEND
};
