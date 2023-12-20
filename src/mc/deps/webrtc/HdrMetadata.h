#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct HdrMetadata {
public:
    // prevent constructor by default
    HdrMetadata& operator=(HdrMetadata const&);
    HdrMetadata(HdrMetadata const&);
    HdrMetadata();
};

}; // namespace webrtc
