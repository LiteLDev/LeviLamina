#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct H264ProfileLevelId {
public:
    // prevent constructor by default
    H264ProfileLevelId& operator=(H264ProfileLevelId const&);
    H264ProfileLevelId(H264ProfileLevelId const&);
    H264ProfileLevelId();
};

} // namespace webrtc
