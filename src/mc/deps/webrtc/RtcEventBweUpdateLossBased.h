#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventBweUpdateLossBased : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventBweUpdateLossBased& operator=(RtcEventBweUpdateLossBased const&);
    RtcEventBweUpdateLossBased(RtcEventBweUpdateLossBased const&);
    RtcEventBweUpdateLossBased();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventBweUpdateLossBased@webrtc@@UEAA@XZ
    virtual ~RtcEventBweUpdateLossBased();

    // vIndex: 1, symbol: ?GetType@RtcEventBweUpdateLossBased@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventBweUpdateLossBased@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventBweUpdateLossBased@webrtc@@QEAA@HEH@Z
    MCAPI RtcEventBweUpdateLossBased(int, uchar, int);

    // NOLINTEND
};

}; // namespace webrtc
