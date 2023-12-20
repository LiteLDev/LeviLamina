#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtcEventRtpPacketOutgoing : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventRtpPacketOutgoing& operator=(RtcEventRtpPacketOutgoing const&);
    RtcEventRtpPacketOutgoing(RtcEventRtpPacketOutgoing const&);
    RtcEventRtpPacketOutgoing();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventRtpPacketOutgoing@webrtc@@UEAA@XZ
    virtual ~RtcEventRtpPacketOutgoing();

    // vIndex: 1, symbol: ?GetType@RtcEventRtpPacketOutgoing@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventRtpPacketOutgoing@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventRtpPacketOutgoing@webrtc@@QEAA@AEBVRtpPacketToSend@1@H@Z
    MCAPI RtcEventRtpPacketOutgoing(class webrtc::RtpPacketToSend const&, int);

    // NOLINTEND
};

}; // namespace webrtc
