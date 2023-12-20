#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::HdrMasteringMetadata {

struct Chromaticity {
public:
    // prevent constructor by default
    Chromaticity& operator=(Chromaticity const&);
    Chromaticity(Chromaticity const&);
    Chromaticity();
};

}; // namespace webrtc::HdrMasteringMetadata
