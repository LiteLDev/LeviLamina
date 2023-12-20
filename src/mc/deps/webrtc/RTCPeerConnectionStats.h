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

class RTCPeerConnectionStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCPeerConnectionStats& operator=(RTCPeerConnectionStats const&);
    RTCPeerConnectionStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCPeerConnectionStats@webrtc@@UEAA@XZ
    virtual ~RTCPeerConnectionStats();

    // vIndex: 1, symbol:
    // ?copy@RTCPeerConnectionStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCPeerConnectionStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCPeerConnectionStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCPeerConnectionStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCPeerConnectionStats(class webrtc::RTCPeerConnectionStats const&);

    // symbol:
    // ??0RTCPeerConnectionStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCPeerConnectionStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCPeerConnectionStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
