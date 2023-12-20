#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

template <typename T0>
class RTCErrorOr {
public:
    // prevent constructor by default
    RTCErrorOr& operator=(RTCErrorOr const&);
    RTCErrorOr(RTCErrorOr const&);
    RTCErrorOr();
};

}; // namespace webrtc
