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
    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::VideoSendTiming const&);

    MCAPI static bool Write(::rtc::ArrayView<uchar>, ushort, uchar);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uchar const& kNetwork2TimestampDeltaOffset();

    MCAPI static uchar const& kPacerExitDeltaOffset();

    MCAPI static uchar const& kPacketizationFinishDeltaOffset();
    // NOLINTEND
};

} // namespace webrtc
