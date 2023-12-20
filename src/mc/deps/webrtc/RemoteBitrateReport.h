#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RemoteBitrateReport {
public:
    // prevent constructor by default
    RemoteBitrateReport& operator=(RemoteBitrateReport const&);
    RemoteBitrateReport(RemoteBitrateReport const&);
    RemoteBitrateReport();
};

}; // namespace webrtc
