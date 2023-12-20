#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventLog {
public:
    // prevent constructor by default
    RtcEventLog& operator=(RtcEventLog const&);
    RtcEventLog(RtcEventLog const&);
    RtcEventLog();

public:
    // NOLINTBEGIN
    // symbol: ?StopLogging@RtcEventLog@webrtc@@UEAAXV?$function@$$A6AXXZ@std@@@Z
    MCVAPI void StopLogging(std::function<void(void)>);

    // NOLINTEND
};

}; // namespace webrtc
