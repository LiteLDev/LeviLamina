#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RTPVideoHeaderVP9 {
public:
    // prevent constructor by default
    RTPVideoHeaderVP9& operator=(RTPVideoHeaderVP9 const&);
    RTPVideoHeaderVP9(RTPVideoHeaderVP9 const&);
    RTPVideoHeaderVP9();
};

}; // namespace webrtc
