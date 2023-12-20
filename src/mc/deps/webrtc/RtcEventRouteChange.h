#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventRouteChange : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventRouteChange& operator=(RtcEventRouteChange const&);
    RtcEventRouteChange(RtcEventRouteChange const&);
    RtcEventRouteChange();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventRouteChange@webrtc@@UEAA@XZ
    virtual ~RtcEventRouteChange();

    // vIndex: 1, symbol: ?GetType@RtcEventRouteChange@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventRouteChange@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventRouteChange@webrtc@@QEAA@_NI@Z
    MCAPI RtcEventRouteChange(bool, uint);

    // NOLINTEND
};

}; // namespace webrtc
