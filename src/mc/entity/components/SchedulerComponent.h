#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {

public:
    // prevent constructor by default
    SchedulerComponent& operator=(SchedulerComponent const&) = delete;
    SchedulerComponent(SchedulerComponent const&)            = delete;
    SchedulerComponent()                                     = delete;

public:
    /**
     * @symbol ?getCurrentEventIndex\@SchedulerComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentEventIndex() const; // NOLINT
    /**
     * @symbol ?setCurrentEventIndex\@SchedulerComponent\@\@QEAAXH\@Z
     */
    MCAPI void setCurrentEventIndex(int); // NOLINT
};
