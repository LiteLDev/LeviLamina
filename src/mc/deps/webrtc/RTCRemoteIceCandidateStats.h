#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RTCIceCandidateStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCIceCandidateStats; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCRemoteIceCandidateStats : public ::webrtc::RTCIceCandidateStats {
public:
    // prevent constructor by default
    RTCRemoteIceCandidateStats& operator=(RTCRemoteIceCandidateStats const&);
    RTCRemoteIceCandidateStats(RTCRemoteIceCandidateStats const&);
    RTCRemoteIceCandidateStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RTCRemoteIceCandidateStats@webrtc@@UEAA@XZ
    virtual ~RTCRemoteIceCandidateStats() = default;

    // vIndex: 1, symbol:
    // ?copy@RTCRemoteIceCandidateStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCRemoteIceCandidateStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // symbol:
    // ??0RTCRemoteIceCandidateStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCRemoteIceCandidateStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCRemoteIceCandidateStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
