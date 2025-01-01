#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskOptions.h"

struct TaskStartInfoBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::string_view>                     name;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                       affinity;
    ::ll::TypedStorage<4, 4, uint>                                    priority;
    ::ll::TypedStorage<4, 4, int>                                     priorityBackDown;
    ::ll::TypedStorage<4, 4, ::TaskOptions>                           options;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> startAtTime;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::thread::id const& NoAffinity();
    // NOLINTEND
};
