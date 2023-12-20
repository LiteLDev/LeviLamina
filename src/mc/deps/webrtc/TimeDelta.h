#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class TimeDelta {
public:
    // prevent constructor by default
    TimeDelta& operator=(TimeDelta const&);
    TimeDelta(TimeDelta const&);
    TimeDelta();
};

}; // namespace webrtc
