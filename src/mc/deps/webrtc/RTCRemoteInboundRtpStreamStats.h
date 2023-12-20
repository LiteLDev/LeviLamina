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

class RTCRemoteInboundRtpStreamStats : public ::webrtc::RTCReceivedRtpStreamStats {
public:
    // prevent constructor by default
    RTCRemoteInboundRtpStreamStats& operator=(RTCRemoteInboundRtpStreamStats const&);
    RTCRemoteInboundRtpStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCRemoteInboundRtpStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCRemoteInboundRtpStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCRemoteInboundRtpStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCRemoteInboundRtpStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCRemoteInboundRtpStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCRemoteInboundRtpStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCRemoteInboundRtpStreamStats(class webrtc::RTCRemoteInboundRtpStreamStats const&);

    // symbol:
    // ??0RTCRemoteInboundRtpStreamStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCRemoteInboundRtpStreamStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCRemoteInboundRtpStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
