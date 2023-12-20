#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventProbeClusterCreated : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventProbeClusterCreated& operator=(RtcEventProbeClusterCreated const&);
    RtcEventProbeClusterCreated(RtcEventProbeClusterCreated const&);
    RtcEventProbeClusterCreated();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcEventProbeClusterCreated@webrtc@@UEAA@XZ
    virtual ~RtcEventProbeClusterCreated() = default;

    // vIndex: 1, symbol: ?GetType@RtcEventProbeClusterCreated@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventProbeClusterCreated@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventProbeClusterCreated@webrtc@@QEAA@HHII@Z
    MCAPI RtcEventProbeClusterCreated(int, int, uint, uint);

    // NOLINTEND
};

}; // namespace webrtc
