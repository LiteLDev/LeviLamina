#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

struct VideoSendTiming {
public:
    // prevent constructor by default
    VideoSendTiming& operator=(VideoSendTiming const&);
    VideoSendTiming(VideoSendTiming const&);
    VideoSendTiming();

public:
    // NOLINTBEGIN
    // symbol: ?GetDeltaCappedMs@VideoSendTiming@webrtc@@SAGVTimeDelta@2@@Z
    MCAPI static ushort GetDeltaCappedMs(class webrtc::TimeDelta);

    // symbol: ?GetDeltaCappedMs@VideoSendTiming@webrtc@@SAG_J0@Z
    MCAPI static ushort GetDeltaCappedMs(int64, int64);

    // NOLINTEND
};

}; // namespace webrtc
