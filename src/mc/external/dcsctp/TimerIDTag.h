#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class TimerIDTag {
public:
    // prevent constructor by default
    TimerIDTag& operator=(TimerIDTag const&);
    TimerIDTag(TimerIDTag const&);
    TimerIDTag();
};

} // namespace dcsctp
