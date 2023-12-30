#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoPlayoutDelay; }
// clang-format on

namespace webrtc {

class PlayoutDelayLimits {
public:
    // prevent constructor by default
    PlayoutDelayLimits& operator=(PlayoutDelayLimits const&);
    PlayoutDelayLimits(PlayoutDelayLimits const&);
    PlayoutDelayLimits();

public:
    // NOLINTBEGIN
    // symbol: ?Write@PlayoutDelayLimits@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBUVideoPlayoutDelay@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, struct webrtc::VideoPlayoutDelay const&);

    // NOLINTEND
};

}; // namespace webrtc
