#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TaskStartInfoBase {

public:
    // prevent constructor by default
    TaskStartInfoBase& operator=(TaskStartInfoBase const&) = delete;
    TaskStartInfoBase(TaskStartInfoBase const&)            = delete;
    TaskStartInfoBase()                                    = delete;

public:
    /**
     * @symbol ?NoAffinity\@TaskStartInfoBase\@\@2Vid\@thread\@std\@\@B
     */
    MCAPI static class std::thread::id const NoAffinity; // NOLINT
};
