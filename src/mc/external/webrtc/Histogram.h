#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::metrics {

class Histogram {
public:
    // prevent constructor by default
    Histogram& operator=(Histogram const&);
    Histogram(Histogram const&);
    Histogram();
};

} // namespace webrtc::metrics
