#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePushEvent {

public:
    // prevent constructor by default
    PressurePlatePushEvent& operator=(PressurePlatePushEvent const&) = delete;
    PressurePlatePushEvent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PressurePlatePushEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PressurePlatePushEvent(struct PressurePlatePushEvent const&);
    /**
     * @symbol ??1PressurePlatePushEvent\@\@QEAA\@XZ
     */
    MCAPI ~PressurePlatePushEvent();
    // NOLINTEND
};
