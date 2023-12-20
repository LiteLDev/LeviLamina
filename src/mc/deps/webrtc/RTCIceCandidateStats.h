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

class RTCIceCandidateStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCIceCandidateStats& operator=(RTCIceCandidateStats const&);
    RTCIceCandidateStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCIceCandidateStats@webrtc@@UEAA@XZ
    virtual ~RTCIceCandidateStats();

    // vIndex: 1, symbol:
    // ?copy@RTCIceCandidateStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCIceCandidateStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCIceCandidateStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCIceCandidateStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCIceCandidateStats(class webrtc::RTCIceCandidateStats const&);

    // symbol: ?kType@RTCIceCandidateStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0RTCIceCandidateStats@webrtc@@IEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@_N@Z
    MCAPI RTCIceCandidateStats(std::string, class webrtc::Timestamp, bool);

    // NOLINTEND
};

}; // namespace webrtc
