#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class MediaStreamProxyWithInternal {
public:
    // prevent constructor by default
    MediaStreamProxyWithInternal& operator=(MediaStreamProxyWithInternal const&);
    MediaStreamProxyWithInternal(MediaStreamProxyWithInternal const&);
    MediaStreamProxyWithInternal();
};

}; // namespace webrtc
