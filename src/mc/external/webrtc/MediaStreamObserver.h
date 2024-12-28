#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class VideoTrackInterface; }
// clang-format on

namespace webrtc {

class MediaStreamObserver {
public:
    // prevent constructor by default
    MediaStreamObserver& operator=(MediaStreamObserver const&);
    MediaStreamObserver(MediaStreamObserver const&);
    MediaStreamObserver();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MediaStreamObserver(::webrtc::MediaStreamInterface*, ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>, ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>, ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>, ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::MediaStreamInterface*, ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>, ::std::function<void(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*)>, ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>, ::std::function<void(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
