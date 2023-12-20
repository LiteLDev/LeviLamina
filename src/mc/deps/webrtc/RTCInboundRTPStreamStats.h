#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCReceivedRtpStreamStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCReceivedRtpStreamStats; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCInboundRTPStreamStats : public ::webrtc::RTCReceivedRtpStreamStats {
public:
    // prevent constructor by default
    RTCInboundRTPStreamStats& operator=(RTCInboundRTPStreamStats const&);
    RTCInboundRTPStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCInboundRTPStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCInboundRTPStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCInboundRTPStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCInboundRTPStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCInboundRTPStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCInboundRTPStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCInboundRTPStreamStats(class webrtc::RTCInboundRTPStreamStats const&);

    // symbol:
    // ??0RTCInboundRTPStreamStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCInboundRTPStreamStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCInboundRTPStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
