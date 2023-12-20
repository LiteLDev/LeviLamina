#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoSendTiming; }
// clang-format on

namespace webrtc {

class VideoTimingExtension {
public:
    // prevent constructor by default
    VideoTimingExtension& operator=(VideoTimingExtension const&);
    VideoTimingExtension(VideoTimingExtension const&);
    VideoTimingExtension();

public:
    // NOLINTBEGIN
    // symbol: ?Write@VideoTimingExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@AEBUVideoSendTiming@2@@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, struct webrtc::VideoSendTiming const&);

    // symbol: ?Write@VideoTimingExtension@webrtc@@SA_NV?$ArrayView@E$0?BCGH@@rtc@@GE@Z
    MCAPI static bool Write(class rtc::ArrayView<uchar, -4711>, ushort, uchar);

    // symbol: ?kNetwork2TimestampDeltaOffset@VideoTimingExtension@webrtc@@2EB
    MCAPI static uchar const kNetwork2TimestampDeltaOffset;

    // symbol: ?kPacerExitDeltaOffset@VideoTimingExtension@webrtc@@2EB
    MCAPI static uchar const kPacerExitDeltaOffset;

    // symbol: ?kPacketizationFinishDeltaOffset@VideoTimingExtension@webrtc@@2EB
    MCAPI static uchar const kPacketizationFinishDeltaOffset;

    // NOLINTEND
};

}; // namespace webrtc
