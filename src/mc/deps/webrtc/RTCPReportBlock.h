#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTCPReportBlock {
public:
    // prevent constructor by default
    RTCPReportBlock& operator=(RTCPReportBlock const&);
    RTCPReportBlock(RTCPReportBlock const&);
    RTCPReportBlock();
};

}; // namespace webrtc
