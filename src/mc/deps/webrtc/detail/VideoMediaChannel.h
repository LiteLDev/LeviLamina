#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class VideoMediaChannel {
public:
    // prevent constructor by default
    VideoMediaChannel& operator=(VideoMediaChannel const&);
    VideoMediaChannel(VideoMediaChannel const&);
    VideoMediaChannel();
};

}; // namespace cricket
