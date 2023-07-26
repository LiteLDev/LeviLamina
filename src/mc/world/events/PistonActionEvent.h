#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PistonActionEvent {

public:
    // prevent constructor by default
    PistonActionEvent& operator=(PistonActionEvent const&) = delete;
    PistonActionEvent(PistonActionEvent const&)            = delete;
    PistonActionEvent()                                    = delete;

public:
    /**
     * @symbol ??1PistonActionEvent\@\@QEAA\@XZ
     */
    MCAPI ~PistonActionEvent(); // NOLINT
};
