#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct EventTracer {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    AddTraceEvent(char, uchar const*, char const*, uint64, int, char const**, uchar const*, uint64 const*, uchar);

    MCNAPI static uchar const* GetCategoryEnabled(char const*);
    // NOLINTEND
};

} // namespace webrtc
