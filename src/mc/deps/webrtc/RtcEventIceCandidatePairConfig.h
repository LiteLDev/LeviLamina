#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidatePairConfigType.h"
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidatePairDescription; }
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventIceCandidatePairConfig : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventIceCandidatePairConfig& operator=(RtcEventIceCandidatePairConfig const&);
    RtcEventIceCandidatePairConfig(RtcEventIceCandidatePairConfig const&);
    RtcEventIceCandidatePairConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtcEventIceCandidatePairConfig@webrtc@@UEAA@XZ
    virtual ~RtcEventIceCandidatePairConfig();

    // vIndex: 1, symbol: ?GetType@RtcEventIceCandidatePairConfig@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventIceCandidatePairConfig@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // symbol:
    // ??0RtcEventIceCandidatePairConfig@webrtc@@QEAA@W4IceCandidatePairConfigType@1@IAEBVIceCandidatePairDescription@1@@Z
    MCAPI
    RtcEventIceCandidatePairConfig(::webrtc::IceCandidatePairConfigType, uint, class webrtc::IceCandidatePairDescription const&);

    // NOLINTEND
};

}; // namespace webrtc
