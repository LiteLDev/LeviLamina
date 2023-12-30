#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoCodecType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

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
    struct PayloadSizeLimits {
    public:
        // prevent constructor by default
        PayloadSizeLimits& operator=(PayloadSizeLimits const&);
        PayloadSizeLimits(PayloadSizeLimits const&);
        PayloadSizeLimits();
    };

public:
    // prevent constructor by default
    RtpPacketizer& operator=(RtpPacketizer const&);
    RtpPacketizer(RtpPacketizer const&);
    RtpPacketizer();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Create@RtpPacketizer@webrtc@@SA?AV?$unique_ptr@VRtpPacketizer@webrtc@@U?$default_delete@VRtpPacketizer@webrtc@@@std@@@std@@V?$optional@W4VideoCodecType@webrtc@@@4@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@12@AEBURTPVideoHeader@2@@Z
    MCAPI static std::unique_ptr<class webrtc::RtpPacketizer>
    Create(std::optional<::webrtc::VideoCodecType>, class rtc::ArrayView<uchar const, -4711>, struct webrtc::RtpPacketizer::PayloadSizeLimits, struct webrtc::RTPVideoHeader const&);

    // symbol:
    // ?SplitAboutEqually@RtpPacketizer@webrtc@@SA?AV?$vector@HV?$allocator@H@std@@@std@@HAEBUPayloadSizeLimits@12@@Z
    MCAPI static std::vector<int> SplitAboutEqually(int, struct webrtc::RtpPacketizer::PayloadSizeLimits const&);

    // NOLINTEND
};

}; // namespace webrtc
