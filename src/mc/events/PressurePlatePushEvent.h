#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePushEvent {

public:
    // prevent constructor by default
    PressurePlatePushEvent& operator=(PressurePlatePushEvent const&) = delete;
    PressurePlatePushEvent()                                         = delete;

public:
    /**
     * @symbol ??0PressurePlatePushEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PressurePlatePushEvent(struct PressurePlatePushEvent const&); // NOLINT
    /**
     * @symbol ??1PressurePlatePushEvent\@\@QEAA\@XZ
     */
    MCAPI ~PressurePlatePushEvent(); // NOLINT
};
