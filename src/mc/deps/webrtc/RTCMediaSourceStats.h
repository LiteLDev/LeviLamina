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

class RTCMediaSourceStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCMediaSourceStats& operator=(RTCMediaSourceStats const&);
    RTCMediaSourceStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCMediaSourceStats@webrtc@@UEAA@XZ
    virtual ~RTCMediaSourceStats();

    // vIndex: 1, symbol:
    // ?copy@RTCMediaSourceStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCMediaSourceStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCMediaSourceStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCMediaSourceStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCMediaSourceStats(class webrtc::RTCMediaSourceStats const&);

    // symbol: ?kType@RTCMediaSourceStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0RTCMediaSourceStats@webrtc@@IEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCMediaSourceStats(std::string, class webrtc::Timestamp);

    // NOLINTEND
};

}; // namespace webrtc
