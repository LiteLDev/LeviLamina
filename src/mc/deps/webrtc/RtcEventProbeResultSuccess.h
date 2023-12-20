#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventProbeResultSuccess : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventProbeResultSuccess& operator=(RtcEventProbeResultSuccess const&);
    RtcEventProbeResultSuccess(RtcEventProbeResultSuccess const&);
    RtcEventProbeResultSuccess();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcEventProbeResultSuccess@webrtc@@UEAA@XZ
    virtual ~RtcEventProbeResultSuccess() = default;

    // vIndex: 1, symbol: ?GetType@RtcEventProbeResultSuccess@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventProbeResultSuccess@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventProbeResultSuccess@webrtc@@QEAA@HH@Z
    MCAPI RtcEventProbeResultSuccess(int, int);

    // NOLINTEND
};

}; // namespace webrtc
