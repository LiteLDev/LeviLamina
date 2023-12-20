#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEvent {
public:
    // RtcEvent inner types define
    enum class Type {};

public:
    // prevent constructor by default
    RtcEvent& operator=(RtcEvent const&);
    RtcEvent(RtcEvent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcEvent@webrtc@@UEAA@XZ
    virtual ~RtcEvent() = default;

    // vIndex: 1, symbol: ?GetType@RtcEventRtcpPacketOutgoing@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const = 0;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventRtcpPacketOutgoing@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const = 0;

    // vIndex: 3, symbol: ?GetGroupKey@RtcEvent@webrtc@@UEBAIXZ
    virtual uint GetGroupKey() const;

    // symbol: ??0RtcEvent@webrtc@@QEAA@XZ
    MCAPI RtcEvent();

    // NOLINTEND
};

}; // namespace webrtc
