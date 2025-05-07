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
    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::VideoSendTiming const&);

    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ushort, uchar);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uchar const& kNetwork2TimestampDeltaOffset();

    MCNAPI static uchar const& kPacerExitDeltaOffset();

    MCNAPI static uchar const& kPacketizationFinishDeltaOffset();
    // NOLINTEND
};

} // namespace webrtc
