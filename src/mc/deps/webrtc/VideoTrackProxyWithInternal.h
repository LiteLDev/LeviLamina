#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class VideoTrackProxyWithInternal {
public:
    // prevent constructor by default
    VideoTrackProxyWithInternal& operator=(VideoTrackProxyWithInternal const&);
    VideoTrackProxyWithInternal(VideoTrackProxyWithInternal const&);
    VideoTrackProxyWithInternal();
};

}; // namespace webrtc
