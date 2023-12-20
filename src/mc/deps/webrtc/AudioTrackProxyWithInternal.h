#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class AudioTrackProxyWithInternal {
public:
    // prevent constructor by default
    AudioTrackProxyWithInternal& operator=(AudioTrackProxyWithInternal const&);
    AudioTrackProxyWithInternal(AudioTrackProxyWithInternal const&);
    AudioTrackProxyWithInternal();
};

}; // namespace webrtc
