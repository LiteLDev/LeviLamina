#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct TimerOptions {
public:
    // prevent constructor by default
    TimerOptions& operator=(TimerOptions const&);
    TimerOptions(TimerOptions const&);
    TimerOptions();
};

} // namespace dcsctp
