#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameSpikeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> eventTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              frameDuration;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>              currentMedianFrameTime;
    // NOLINTEND
};
