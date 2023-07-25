#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TaskStartInfoBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKSTARTINFOBASE
public:
    TaskStartInfoBase& operator=(TaskStartInfoBase const&) = delete;
    TaskStartInfoBase(TaskStartInfoBase const&)            = delete;
    TaskStartInfoBase()                                    = delete;
#endif

public:
    /**
     * @symbol ?NoAffinity\@TaskStartInfoBase\@\@2Vid\@thread\@std\@\@B
     */
    MCAPI static class std::thread::id const NoAffinity;
};
