#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCStatsMemberInterface; }
// clang-format on

namespace webrtc {

class RTCStats {
public:
    // prevent constructor by default
    RTCStats& operator=(RTCStats const&);
    RTCStats(RTCStats const&);
    RTCStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCStats@webrtc@@UEAA@XZ
    virtual ~RTCStats();

    // vIndex: 1, symbol:
    // ?copy@RTCRTPStreamStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const = 0;

    // vIndex: 2, symbol: ?type@RTCRTPStreamStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const = 0;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol:
    // ?Members@RTCStats@webrtc@@QEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<class webrtc::RTCStatsMemberInterface const*> Members() const;

    // symbol: ?ToJson@RTCStats@webrtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToJson() const;

    // NOLINTEND
};

}; // namespace webrtc
