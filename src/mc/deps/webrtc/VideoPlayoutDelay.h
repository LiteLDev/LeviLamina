#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoPlayoutDelay {
public:
    // prevent constructor by default
    VideoPlayoutDelay& operator=(VideoPlayoutDelay const&);
    VideoPlayoutDelay(VideoPlayoutDelay const&);
    VideoPlayoutDelay();
};

}; // namespace webrtc
