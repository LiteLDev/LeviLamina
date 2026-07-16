#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoPlayoutDelay; }
// clang-format on

namespace webrtc {

class PlayoutDelayLimits {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    Write(::webrtc::ArrayView<uchar, 18446744073709546905> data, ::webrtc::VideoPlayoutDelay const& playout_delay);
    // NOLINTEND
};

} // namespace webrtc
