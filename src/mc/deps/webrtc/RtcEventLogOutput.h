#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEventLogOutput {
public:
    // prevent constructor by default
    RtcEventLogOutput& operator=(RtcEventLogOutput const&);
    RtcEventLogOutput(RtcEventLogOutput const&);
    RtcEventLogOutput();
};

}; // namespace webrtc
