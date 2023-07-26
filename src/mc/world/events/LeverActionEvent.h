#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LeverActionEvent {

public:
    // prevent constructor by default
    LeverActionEvent& operator=(LeverActionEvent const&) = delete;
    LeverActionEvent()                                   = delete;

public:
    /**
     * @symbol ??0LeverActionEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI LeverActionEvent(struct LeverActionEvent const&); // NOLINT
    /**
     * @symbol ??1LeverActionEvent\@\@QEAA\@XZ
     */
    MCAPI ~LeverActionEvent(); // NOLINT
};
