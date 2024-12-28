#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkAvailability {
public:
    // prevent constructor by default
    NetworkAvailability& operator=(NetworkAvailability const&);
    NetworkAvailability(NetworkAvailability const&);
    NetworkAvailability();
};

} // namespace webrtc
