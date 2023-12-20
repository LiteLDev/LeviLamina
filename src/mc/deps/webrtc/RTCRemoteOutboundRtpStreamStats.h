#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCSentRtpStreamStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCSentRtpStreamStats; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCRemoteOutboundRtpStreamStats : public ::webrtc::RTCSentRtpStreamStats {
public:
    // prevent constructor by default
    RTCRemoteOutboundRtpStreamStats& operator=(RTCRemoteOutboundRtpStreamStats const&);
    RTCRemoteOutboundRtpStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCRemoteOutboundRtpStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCRemoteOutboundRtpStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCRemoteOutboundRtpStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCRemoteOutboundRtpStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCRemoteOutboundRtpStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCRemoteOutboundRtpStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCRemoteOutboundRtpStreamStats(class webrtc::RTCRemoteOutboundRtpStreamStats const&);

    // symbol:
    // ??0RTCRemoteOutboundRtpStreamStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCRemoteOutboundRtpStreamStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCRemoteOutboundRtpStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
