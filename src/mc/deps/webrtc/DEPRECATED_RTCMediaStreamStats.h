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

class DEPRECATED_RTCMediaStreamStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    DEPRECATED_RTCMediaStreamStats& operator=(DEPRECATED_RTCMediaStreamStats const&);
    DEPRECATED_RTCMediaStreamStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DEPRECATED_RTCMediaStreamStats@webrtc@@UEAA@XZ
    virtual ~DEPRECATED_RTCMediaStreamStats();

    // vIndex: 1, symbol:
    // ?copy@DEPRECATED_RTCMediaStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@DEPRECATED_RTCMediaStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@DEPRECATED_RTCMediaStreamStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0DEPRECATED_RTCMediaStreamStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI DEPRECATED_RTCMediaStreamStats(class webrtc::DEPRECATED_RTCMediaStreamStats const&);

    // symbol:
    // ??0DEPRECATED_RTCMediaStreamStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI DEPRECATED_RTCMediaStreamStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@DEPRECATED_RTCMediaStreamStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
