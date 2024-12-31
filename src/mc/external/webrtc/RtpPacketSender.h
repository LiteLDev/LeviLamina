#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtpPacketSender {
public:
    // prevent constructor by default
    RtpPacketSender& operator=(RtpPacketSender const&);
    RtpPacketSender(RtpPacketSender const&);
    RtpPacketSender();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpPacketSender() = default;

    // vIndex: 1
    virtual void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>>) = 0;

    // vIndex: 2
    virtual void RemovePacketsForSsrc(uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
