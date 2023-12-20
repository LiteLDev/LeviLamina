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

class RTCAudioPlayoutStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCAudioPlayoutStats& operator=(RTCAudioPlayoutStats const&);
    RTCAudioPlayoutStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCAudioPlayoutStats@webrtc@@UEAA@XZ
    virtual ~RTCAudioPlayoutStats();

    // vIndex: 1, symbol:
    // ?copy@RTCAudioPlayoutStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCAudioPlayoutStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCAudioPlayoutStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCAudioPlayoutStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCAudioPlayoutStats(class webrtc::RTCAudioPlayoutStats const&);

    // symbol:
    // ??0RTCAudioPlayoutStats@webrtc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCAudioPlayoutStats(std::string const&, class webrtc::Timestamp);

    // symbol: ?kType@RTCAudioPlayoutStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
