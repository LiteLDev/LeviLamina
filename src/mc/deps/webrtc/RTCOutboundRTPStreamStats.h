#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCRTPStreamStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCRTPStreamStats; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCOutboundRTPStreamStats : public ::webrtc::RTCRTPStreamStats {
public:
    // prevent constructor by default
    RTCOutboundRTPStreamStats& operator=(RTCOutboundRTPStreamStats const&);
    RTCOutboundRTPStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCOutboundRTPStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCOutboundRTPStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCOutboundRTPStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCOutboundRTPStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCOutboundRTPStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCOutboundRTPStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCOutboundRTPStreamStats(class webrtc::RTCOutboundRTPStreamStats const&);

    // symbol:
    // ??0RTCOutboundRTPStreamStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCOutboundRTPStreamStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCOutboundRTPStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
