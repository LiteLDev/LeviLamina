#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct BandwidthEstimationInfo {
public:
    // prevent constructor by default
    BandwidthEstimationInfo& operator=(BandwidthEstimationInfo const&);
    BandwidthEstimationInfo(BandwidthEstimationInfo const&);
    BandwidthEstimationInfo();
};

}; // namespace cricket
