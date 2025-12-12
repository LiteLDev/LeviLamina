#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtpPacketSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpPacketSender() = default;

    virtual void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>) = 0;

    virtual void RemovePacketsForSsrc(uint);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
