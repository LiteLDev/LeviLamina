#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventDtlsTransportState : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventDtlsTransportState& operator=(RtcEventDtlsTransportState const&);
    RtcEventDtlsTransportState(RtcEventDtlsTransportState const&);
    RtcEventDtlsTransportState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventDtlsTransportState@webrtc@@UEAA@XZ
    virtual ~RtcEventDtlsTransportState();

    // vIndex: 1, symbol: ?GetType@RtcEventDtlsTransportState@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventDtlsTransportState@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventDtlsTransportState@webrtc@@QEAA@W4DtlsTransportState@1@@Z
    MCAPI explicit RtcEventDtlsTransportState(::webrtc::DtlsTransportState);

    // NOLINTEND
};

}; // namespace webrtc
