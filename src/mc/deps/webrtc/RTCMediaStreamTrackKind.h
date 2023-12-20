#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCMediaStreamTrackKind {
public:
    // prevent constructor by default
    RTCMediaStreamTrackKind& operator=(RTCMediaStreamTrackKind const&);
    RTCMediaStreamTrackKind(RTCMediaStreamTrackKind const&);
    RTCMediaStreamTrackKind();

public:
    // NOLINTBEGIN
    // symbol: ?kAudio@RTCMediaStreamTrackKind@webrtc@@2QEBDEB
    MCAPI static char const* const kAudio;

    // symbol: ?kVideo@RTCMediaStreamTrackKind@webrtc@@2QEBDEB
    MCAPI static char const* const kVideo;

    // NOLINTEND
};

}; // namespace webrtc
