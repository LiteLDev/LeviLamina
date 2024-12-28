#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoStream {
public:
    // prevent constructor by default
    VideoStream& operator=(VideoStream const&);
    VideoStream(VideoStream const&);
    VideoStream();
};

} // namespace webrtc
