#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StatsObserver {
public:
    // prevent constructor by default
    StatsObserver& operator=(StatsObserver const&);
    StatsObserver(StatsObserver const&);
    StatsObserver();
};

}; // namespace webrtc
