#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventAlrState : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventAlrState& operator=(RtcEventAlrState const&);
    RtcEventAlrState(RtcEventAlrState const&);
    RtcEventAlrState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventAlrState@webrtc@@UEAA@XZ
    virtual ~RtcEventAlrState();

    // vIndex: 1, symbol: ?GetType@RtcEventAlrState@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventAlrState@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventAlrState@webrtc@@QEAA@_N@Z
    MCAPI explicit RtcEventAlrState(bool);

    // NOLINTEND
};

}; // namespace webrtc
