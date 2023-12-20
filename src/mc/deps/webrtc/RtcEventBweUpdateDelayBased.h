#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthUsage.h"
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventBweUpdateDelayBased : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventBweUpdateDelayBased& operator=(RtcEventBweUpdateDelayBased const&);
    RtcEventBweUpdateDelayBased(RtcEventBweUpdateDelayBased const&);
    RtcEventBweUpdateDelayBased();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventBweUpdateDelayBased@webrtc@@UEAA@XZ
    virtual ~RtcEventBweUpdateDelayBased();

    // vIndex: 1, symbol: ?GetType@RtcEventBweUpdateDelayBased@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventBweUpdateDelayBased@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventBweUpdateDelayBased@webrtc@@QEAA@HW4BandwidthUsage@1@@Z
    MCAPI RtcEventBweUpdateDelayBased(int, ::webrtc::BandwidthUsage);

    // NOLINTEND
};

}; // namespace webrtc
