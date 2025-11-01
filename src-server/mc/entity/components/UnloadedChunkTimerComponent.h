#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UnloadedChunkTimerComponent {
public:
    // UnloadedChunkTimerComponent inner types define
    using Duration_t = ::std::chrono::seconds;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds> mDuration;
    // NOLINTEND

};
