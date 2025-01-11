#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/VideoCodecType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RTPVideoHeader; }
// clang-format on

namespace webrtc {

class RtpPacketizer {
public:
    // RtpPacketizer inner types declare
    // clang-format off
    struct PayloadSizeLimits;
    // clang-format on

    // RtpPacketizer inner types define
    struct PayloadSizeLimits {};

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::webrtc::RtpPacketizer>
    Create(::std::optional<::webrtc::VideoCodecType>, ::rtc::ArrayView<uchar const>, ::webrtc::RtpPacketizer::PayloadSizeLimits, ::webrtc::RTPVideoHeader const&);

    MCAPI static ::std::vector<int> SplitAboutEqually(int, ::webrtc::RtpPacketizer::PayloadSizeLimits const&);
    // NOLINTEND
};

} // namespace webrtc
