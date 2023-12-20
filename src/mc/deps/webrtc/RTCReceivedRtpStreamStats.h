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

class RTCReceivedRtpStreamStats : public ::webrtc::RTCRTPStreamStats {
public:
    // prevent constructor by default
    RTCReceivedRtpStreamStats& operator=(RTCReceivedRtpStreamStats const&);
    RTCReceivedRtpStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCReceivedRtpStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCReceivedRtpStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCReceivedRtpStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCReceivedRtpStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCReceivedRtpStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCReceivedRtpStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCReceivedRtpStreamStats(class webrtc::RTCReceivedRtpStreamStats const&);

    // symbol: ?kType@RTCReceivedRtpStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0RTCReceivedRtpStreamStats@webrtc@@IEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCReceivedRtpStreamStats(std::string, class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
