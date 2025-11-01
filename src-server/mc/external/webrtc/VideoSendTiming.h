#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

struct VideoSendTiming {
public:
    // VideoSendTiming inner types define
    enum class TimingFrameFlags : uchar {
        KNotTriggered     = 0,
        KTriggeredByTimer = 1,
        KTriggeredBySize  = 2,
        KInvalid          = 255,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkde078a;
    ::ll::UntypedStorage<2, 2> mUnk96abf8;
    ::ll::UntypedStorage<2, 2> mUnkdea2d2;
    ::ll::UntypedStorage<2, 2> mUnkac6cf1;
    ::ll::UntypedStorage<2, 2> mUnk211515;
    ::ll::UntypedStorage<2, 2> mUnke101d9;
    ::ll::UntypedStorage<1, 1> mUnk713956;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSendTiming& operator=(VideoSendTiming const&);
    VideoSendTiming(VideoSendTiming const&);
    VideoSendTiming();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ushort GetDeltaCappedMs(::webrtc::TimeDelta delta);

    MCNAPI static ushort GetDeltaCappedMs(int64 base_ms, int64 time_ms);
    // NOLINTEND
};

} // namespace webrtc
