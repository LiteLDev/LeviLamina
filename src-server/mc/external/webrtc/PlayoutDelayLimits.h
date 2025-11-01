#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoPlayoutDelay; }
// clang-format on

namespace webrtc {

class PlayoutDelayLimits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::VideoPlayoutDelay const& playout_delay);
    // NOLINTEND
};

} // namespace webrtc
