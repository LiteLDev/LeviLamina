#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCTransportStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCTransportStats& operator=(RTCTransportStats const&);
    RTCTransportStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCTransportStats@webrtc@@UEAA@XZ
    virtual ~RTCTransportStats();

    // vIndex: 1, symbol:
    // ?copy@RTCTransportStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCTransportStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCTransportStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCTransportStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCTransportStats(class webrtc::RTCTransportStats const&);

    // symbol:
    // ??0RTCTransportStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCTransportStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCTransportStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
