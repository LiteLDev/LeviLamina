#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TaskStartInfoBase {
public:
    enum class TaskOptions : int {
        Default         = 0x0,
        TaskProfiled    = 0x1,
        LinkPredecessor = 0x2,
    };

    // prevent constructor by default
    TaskStartInfoBase& operator=(TaskStartInfoBase const&);
    TaskStartInfoBase(TaskStartInfoBase const&);
    TaskStartInfoBase();

    std::string_view                      name;             // this+0x0
    std::thread::id                       affinity;         // this+0x10
    unsigned int                          priority;         // this+0x14
    int                                   priorityBackDown; // this+0x18
    TaskOptions                           options;          // this+0x1C
    std::chrono::steady_clock::time_point startAtTime;      // this+0x20
public:
    // NOLINTBEGIN
    // symbol: ?NoAffinity@TaskStartInfoBase@@2Vid@thread@std@@B
    MCAPI static std::thread::id const NoAffinity;

    // NOLINTEND
};
