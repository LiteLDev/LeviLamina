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

class DEPRECATED_RTCMediaStreamTrackStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    DEPRECATED_RTCMediaStreamTrackStats& operator=(DEPRECATED_RTCMediaStreamTrackStats const&);
    DEPRECATED_RTCMediaStreamTrackStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DEPRECATED_RTCMediaStreamTrackStats@webrtc@@UEAA@XZ
    virtual ~DEPRECATED_RTCMediaStreamTrackStats();

    // vIndex: 1, symbol:
    // ?copy@DEPRECATED_RTCMediaStreamTrackStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@DEPRECATED_RTCMediaStreamTrackStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@DEPRECATED_RTCMediaStreamTrackStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0DEPRECATED_RTCMediaStreamTrackStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI DEPRECATED_RTCMediaStreamTrackStats(class webrtc::DEPRECATED_RTCMediaStreamTrackStats const&);

    // symbol:
    // ??0DEPRECATED_RTCMediaStreamTrackStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@PEBD@Z
    MCAPI DEPRECATED_RTCMediaStreamTrackStats(std::string, class webrtc::Timestamp, char const*);

    // symbol: ?kType@DEPRECATED_RTCMediaStreamTrackStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
