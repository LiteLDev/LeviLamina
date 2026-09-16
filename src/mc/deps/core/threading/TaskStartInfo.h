#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TaskStartInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::string_view>                     name;
    ::ll::TypedStorage<4, 4, ::std::thread::id>                       affinity;
    ::ll::TypedStorage<4, 4, uint>                                    priority;
    ::ll::TypedStorage<4, 4, int>                                     priorityBackDown;
    ::ll::TypedStorage<1, 1, bool>                                    mLinkCancellation;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> startAtTime;
    // NOLINTEND
};
