#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameSlowdownEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> eventTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              eventDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              maximumFrameTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              currentMedianFrameTime;
    // NOLINTEND
};
