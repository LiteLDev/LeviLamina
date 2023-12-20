#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventDtlsWritableState : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventDtlsWritableState& operator=(RtcEventDtlsWritableState const&);
    RtcEventDtlsWritableState(RtcEventDtlsWritableState const&);
    RtcEventDtlsWritableState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventDtlsWritableState@webrtc@@UEAA@XZ
    virtual ~RtcEventDtlsWritableState();

    // vIndex: 1, symbol: ?GetType@RtcEventDtlsWritableState@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventDtlsWritableState@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventDtlsWritableState@webrtc@@QEAA@_N@Z
    MCAPI explicit RtcEventDtlsWritableState(bool);

    // NOLINTEND
};

}; // namespace webrtc
