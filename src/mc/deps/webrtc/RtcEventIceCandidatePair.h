#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidatePairEventType.h"
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventIceCandidatePair : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventIceCandidatePair& operator=(RtcEventIceCandidatePair const&);
    RtcEventIceCandidatePair(RtcEventIceCandidatePair const&);
    RtcEventIceCandidatePair();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventIceCandidatePair@webrtc@@UEAA@XZ
    virtual ~RtcEventIceCandidatePair();

    // vIndex: 1, symbol: ?GetType@RtcEventIceCandidatePair@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventIceCandidatePair@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol: ??0RtcEventIceCandidatePair@webrtc@@QEAA@W4IceCandidatePairEventType@1@II@Z
    MCAPI RtcEventIceCandidatePair(::webrtc::IceCandidatePairEventType, uint, uint);

    // NOLINTEND
};

}; // namespace webrtc
