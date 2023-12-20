#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class InterArrivalDelta {
public:
    // prevent constructor by default
    InterArrivalDelta& operator=(InterArrivalDelta const&);
    InterArrivalDelta(InterArrivalDelta const&);
    InterArrivalDelta();

public:
    // NOLINTBEGIN
    // symbol: ?ComputeDeltas@InterArrivalDelta@webrtc@@QEAA_NVTimestamp@2@00_KPEAVTimeDelta@2@2PEAH@Z
    MCAPI bool
    ComputeDeltas(class webrtc::Timestamp, class webrtc::Timestamp, class webrtc::Timestamp, uint64, class webrtc::TimeDelta*, class webrtc::TimeDelta*, int*);

    // symbol: ??0InterArrivalDelta@webrtc@@QEAA@VTimeDelta@1@@Z
    MCAPI explicit InterArrivalDelta(class webrtc::TimeDelta);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BelongsToBurst@InterArrivalDelta@webrtc@@AEBA_NVTimestamp@2@0@Z
    MCAPI bool BelongsToBurst(class webrtc::Timestamp, class webrtc::Timestamp) const;

    // symbol: ?NewTimestampGroup@InterArrivalDelta@webrtc@@AEBA_NVTimestamp@2@0@Z
    MCAPI bool NewTimestampGroup(class webrtc::Timestamp, class webrtc::Timestamp) const;

    // symbol: ?Reset@InterArrivalDelta@webrtc@@AEAAXXZ
    MCAPI void Reset();

    // NOLINTEND
};

}; // namespace webrtc
