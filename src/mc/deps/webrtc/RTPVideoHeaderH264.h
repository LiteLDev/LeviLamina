#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderH264 {
public:
    // prevent constructor by default
    RTPVideoHeaderH264& operator=(RTPVideoHeaderH264 const&);
    RTPVideoHeaderH264(RTPVideoHeaderH264 const&);
    RTPVideoHeaderH264();
};

}; // namespace webrtc
