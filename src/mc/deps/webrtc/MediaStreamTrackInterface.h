#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class MediaStreamTrackInterface {
public:
    // MediaStreamTrackInterface inner types define
    enum class TrackState {};

public:
    // prevent constructor by default
    MediaStreamTrackInterface& operator=(MediaStreamTrackInterface const&);
    MediaStreamTrackInterface(MediaStreamTrackInterface const&);
    MediaStreamTrackInterface();

public:
    // NOLINTBEGIN
    // symbol: ?kAudioKind@MediaStreamTrackInterface@webrtc@@2QEBDEB
    MCAPI static char const* const kAudioKind;

    // symbol: ?kVideoKind@MediaStreamTrackInterface@webrtc@@2QEBDEB
    MCAPI static char const* const kVideoKind;

    // NOLINTEND
};

}; // namespace webrtc
