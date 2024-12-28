#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoPlayoutDelay; }
// clang-format on

namespace webrtc {

class PlayoutDelayLimits {
public:
    // prevent constructor by default
    PlayoutDelayLimits& operator=(PlayoutDelayLimits const&);
    PlayoutDelayLimits(PlayoutDelayLimits const&);
    PlayoutDelayLimits();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::VideoPlayoutDelay const&);
    // NOLINTEND
};

} // namespace webrtc
