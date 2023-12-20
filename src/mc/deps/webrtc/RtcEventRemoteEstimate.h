#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcEvent.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
// clang-format on

namespace webrtc {

class RtcEventRemoteEstimate : public ::webrtc::RtcEvent {
public:
    // prevent constructor by default
    RtcEventRemoteEstimate& operator=(RtcEventRemoteEstimate const&);
    RtcEventRemoteEstimate(RtcEventRemoteEstimate const&);
    RtcEventRemoteEstimate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtcEventRemoteEstimate@webrtc@@UEAA@XZ
    virtual ~RtcEventRemoteEstimate() = default;

    // vIndex: 1, symbol: ?GetType@RtcEventRemoteEstimate@webrtc@@UEBA?AW4Type@RtcEvent@2@XZ
    virtual ::webrtc::RtcEvent::Type GetType() const;

    // vIndex: 2, symbol: ?IsConfigEvent@RtcEventRemoteEstimate@webrtc@@UEBA_NXZ
    virtual bool IsConfigEvent() const;

    // NOLINTEND
};

}; // namespace webrtc
