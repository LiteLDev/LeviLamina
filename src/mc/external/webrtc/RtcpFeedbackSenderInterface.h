#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc {

class RtcpFeedbackSenderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpFeedbackSenderInterface() = default;

    virtual void SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>>) = 0;

    virtual void SetRemb(int64, ::std::vector<uint>) = 0;

    virtual void UnsetRemb() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
