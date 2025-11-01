#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoSendTiming; }
// clang-format on

namespace webrtc {

class VideoTimingExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ::webrtc::VideoSendTiming const& timing);

    MCNAPI static bool Write(::rtc::ArrayView<uchar> data, ushort time_delta_ms, uchar offset);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uchar const& kNetwork2TimestampDeltaOffset();

    MCNAPI static uchar const& kPacerExitDeltaOffset();

    MCNAPI static uchar const& kPacketizationFinishDeltaOffset();
    // NOLINTEND

};

}
