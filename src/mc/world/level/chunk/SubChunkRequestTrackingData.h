#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SubChunkRequestTrackingData {
public:
    // prevent constructor by default
    SubChunkRequestTrackingData& operator=(SubChunkRequestTrackingData const&);
    SubChunkRequestTrackingData(SubChunkRequestTrackingData const&);
    SubChunkRequestTrackingData();
};
