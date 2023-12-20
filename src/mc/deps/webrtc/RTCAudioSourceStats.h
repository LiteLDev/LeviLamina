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

class RTCAudioSourceStats : public ::webrtc::RTCMediaSourceStats {
public:
    // prevent constructor by default
    RTCAudioSourceStats& operator=(RTCAudioSourceStats const&);
    RTCAudioSourceStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCAudioSourceStats@webrtc@@UEAA@XZ
    virtual ~RTCAudioSourceStats();

    // vIndex: 1, symbol:
    // ?copy@RTCAudioSourceStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCAudioSourceStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCAudioSourceStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCAudioSourceStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCAudioSourceStats(class webrtc::RTCAudioSourceStats const&);

    // symbol:
    // ??0RTCAudioSourceStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCAudioSourceStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCAudioSourceStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
