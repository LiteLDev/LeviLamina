#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/ProbeFailureReason.h"
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventProbeResultFailure : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventProbeResultFailure& operator=(RtcEventProbeResultFailure const&);
    RtcEventProbeResultFailure(RtcEventProbeResultFailure const&);
    RtcEventProbeResultFailure();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcEventProbeResultFailure@webrtc@@UEAA@XZ
    virtual ~RtcEventProbeResultFailure() = default;

    // vIndex: 1, symbol: ?GetType@RtcEventProbeResultFailure@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventProbeResultFailure@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventProbeResultFailure@webrtc@@QEAA@HW4ProbeFailureReason@1@@Z
    MCAPI RtcEventProbeResultFailure(int, ::webrtc::ProbeFailureReason);

    // NOLINTEND
};

}; // namespace webrtc
