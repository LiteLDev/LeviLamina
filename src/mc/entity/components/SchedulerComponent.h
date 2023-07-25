#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULERCOMPONENT
public:
    SchedulerComponent& operator=(SchedulerComponent const&) = delete;
    SchedulerComponent(SchedulerComponent const&)            = delete;
    SchedulerComponent()                                     = delete;
#endif

public:
    /**
     * @symbol ?getCurrentEventIndex\@SchedulerComponent\@\@QEBAHXZ
     */
    MCAPI int getCurrentEventIndex() const;
    /**
     * @symbol ?setCurrentEventIndex\@SchedulerComponent\@\@QEAAXH\@Z
     */
    MCAPI void setCurrentEventIndex(int);
};
