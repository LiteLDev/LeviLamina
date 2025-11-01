#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/MediaType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class RtpPacketReceived; }
// clang-format on

namespace webrtc {

class PacketReceiver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void DeliverRtcpPacket(::rtc::CopyOnWriteBuffer) = 0;

    // vIndex: 1
    virtual void DeliverRtpPacket(::webrtc::MediaType, ::webrtc::RtpPacketReceived, ::absl::AnyInvocable<bool(::webrtc::RtpPacketReceived const&)>) = 0;

    // vIndex: 2
    virtual ~PacketReceiver() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
