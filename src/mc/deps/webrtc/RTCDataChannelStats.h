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

class RTCDataChannelStats : public ::webrtc::RTCStats {
public:
    // prevent constructor by default
    RTCDataChannelStats& operator=(RTCDataChannelStats const&);
    RTCDataChannelStats();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RTCDataChannelStats@webrtc@@UEAA@XZ
    virtual ~RTCDataChannelStats();

    // vIndex: 1, symbol:
    // ?copy@RTCDataChannelStats@webrtc@@UEBA?AV?$unique_ptr@VRTCStats@webrtc@@U?$default_delete@VRTCStats@webrtc@@@std@@@std@@XZ
    virtual std::unique_ptr<class webrtc::RTCStats> copy() const;

    // vIndex: 2, symbol: ?type@RTCDataChannelStats@webrtc@@UEBAPEBDXZ
    virtual char const* type() const;

    // vIndex: 3, symbol:
    // ?MembersOfThisObjectAndAncestors@RTCDataChannelStats@webrtc@@MEBA?AV?$vector@PEBVRTCStatsMemberInterface@webrtc@@V?$allocator@PEBVRTCStatsMemberInterface@webrtc@@@std@@@std@@_K@Z
    virtual std::vector<class webrtc::RTCStatsMemberInterface const*> MembersOfThisObjectAndAncestors(uint64) const;

    // symbol: ??0RTCDataChannelStats@webrtc@@QEAA@AEBV01@@Z
    MCAPI RTCDataChannelStats(class webrtc::RTCDataChannelStats const&);

    // symbol:
    // ??0RTCDataChannelStats@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
    MCAPI RTCDataChannelStats(std::string, class webrtc::Timestamp);

    // symbol: ?kType@RTCDataChannelStats@webrtc@@2QBDB
    MCAPI static char const kType[];

    // NOLINTEND
};

}; // namespace webrtc
