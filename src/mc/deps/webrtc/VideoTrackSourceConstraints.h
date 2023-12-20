#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoTrackSourceConstraints {
public:
    // prevent constructor by default
    VideoTrackSourceConstraints& operator=(VideoTrackSourceConstraints const&);
    VideoTrackSourceConstraints(VideoTrackSourceConstraints const&);
    VideoTrackSourceConstraints();
};

}; // namespace webrtc
