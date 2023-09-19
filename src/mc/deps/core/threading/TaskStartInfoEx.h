#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct TaskStartInfoEx {
public:
    // prevent constructor by default
    TaskStartInfoEx& operator=(TaskStartInfoEx const&);
    TaskStartInfoEx(TaskStartInfoEx const&);
    TaskStartInfoEx();
};
