#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderVP8 {
public:
    // prevent constructor by default
    RTPVideoHeaderVP8& operator=(RTPVideoHeaderVP8 const&);
    RTPVideoHeaderVP8(RTPVideoHeaderVP8 const&);
    RTPVideoHeaderVP8();
};

}; // namespace webrtc
