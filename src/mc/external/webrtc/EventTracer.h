#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct EventTracer {
public:
    // prevent constructor by default
    EventTracer& operator=(EventTracer const&);
    EventTracer(EventTracer const&);
    EventTracer();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    AddTraceEvent(char, uchar const*, char const*, uint64, int, char const**, uchar const*, uint64 const*, uchar);

    MCAPI static uchar const* GetCategoryEnabled(char const*);
    // NOLINTEND
};

} // namespace webrtc
