#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TaskStartInfoBase {
public:
    // prevent constructor by default
    TaskStartInfoBase& operator=(TaskStartInfoBase const&);
    TaskStartInfoBase(TaskStartInfoBase const&);
    TaskStartInfoBase();

public:
    // NOLINTBEGIN
    // symbol: ?NoAffinity@TaskStartInfoBase@@2Vid@thread@std@@B
    MCAPI static std::thread::id const NoAffinity;

    // NOLINTEND
};
