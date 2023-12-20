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

class RTCSentRtpStreamStats : public ::webrtc::RTCRTPStreamStats {
public:
    // prevent constructor by default
    RTCSentRtpStreamStats& operator=(RTCSentRtpStreamStats const&);
    RTCSentRtpStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCSentRtpStreamStats@webrtc@@UEAA@XZ
    virtual ~RTCSentRtpStreamStats();

    // vIndex: 1, symbol:
    // ?copy@RTCSentRtpStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCSentRtpStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCSentRtpStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCSentRtpStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCSentRtpStreamStats(class webrtc::RTCSentRtpStreamStats const&);

    // symbol: ?kType@RTCSentRtpStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0RTCSentRtpStreamStats@webrtc@@IEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCSentRtpStreamStats(std::string, class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
