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
    // vIndex: 0
    virtual ~RtcpFeedbackSenderInterface() = default;

    // vIndex: 1
    virtual void SendCombinedRtcpPacket(::std::vector<::std::unique_ptr<::webrtc::rtcp::RtcpPacket>>) = 0;

    // vIndex: 2
    virtual void SetRemb(int64, ::std::vector<uint>) = 0;

    // vIndex: 3
    virtual void UnsetRemb() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
