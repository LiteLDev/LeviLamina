#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCMediaSourceStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCMediaSourceStats; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCVideoSourceStats : public ::webrtc::RTCMediaSourceStats {
public:
    // prevent constructor by default
    RTCVideoSourceStats& operator=(RTCVideoSourceStats const&);
    RTCVideoSourceStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCVideoSourceStats@webrtc@@UEAA@XZ
    virtual ~RTCVideoSourceStats();

    // vIndex: 1, symbol:
    // ?copy@RTCVideoSourceStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCVideoSourceStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCVideoSourceStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCVideoSourceStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCVideoSourceStats(class webrtc::RTCVideoSourceStats const&);

    // symbol:
    // ??0RTCVideoSourceStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCVideoSourceStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCVideoSourceStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
