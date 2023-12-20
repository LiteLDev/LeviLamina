#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventRtcpPacketOutgoing : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventRtcpPacketOutgoing& operator=(RtcEventRtcpPacketOutgoing const&);
    RtcEventRtcpPacketOutgoing(RtcEventRtcpPacketOutgoing const&);
    RtcEventRtcpPacketOutgoing();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventRtcpPacketOutgoing@webrtc@@UEAA@XZ
    virtual ~RtcEventRtcpPacketOutgoing();

    // vIndex: 1, symbol: ?GetType@RtcEventRtcpPacketOutgoing@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventRtcpPacketOutgoing@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventRtcpPacketOutgoing@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI explicit RtcEventRtcpPacketOutgoing(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace webrtc
