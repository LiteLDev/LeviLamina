#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class VideoTrackSourceProxyWithInternal {
public:
    // prevent constructor by default
    VideoTrackSourceProxyWithInternal& operator=(VideoTrackSourceProxyWithInternal const&);
    VideoTrackSourceProxyWithInternal(VideoTrackSourceProxyWithInternal const&);
    VideoTrackSourceProxyWithInternal();
};

}; // namespace webrtc
