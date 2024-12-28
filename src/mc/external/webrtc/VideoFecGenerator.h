#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class VideoFecGenerator {
public:
    // prevent constructor by default
    VideoFecGenerator& operator=(VideoFecGenerator const&);
    VideoFecGenerator(VideoFecGenerator const&);
    VideoFecGenerator();
};

} // namespace webrtc
