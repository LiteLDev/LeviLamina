#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RoundTripTimeUpdate {
public:
    // prevent constructor by default
    RoundTripTimeUpdate& operator=(RoundTripTimeUpdate const&);
    RoundTripTimeUpdate(RoundTripTimeUpdate const&);
    RoundTripTimeUpdate();
};

}; // namespace webrtc
