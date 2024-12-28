#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

struct ReceiveTimeInfo {
public:
    // prevent constructor by default
    ReceiveTimeInfo& operator=(ReceiveTimeInfo const&);
    ReceiveTimeInfo(ReceiveTimeInfo const&);
    ReceiveTimeInfo();
};

} // namespace webrtc::rtcp
