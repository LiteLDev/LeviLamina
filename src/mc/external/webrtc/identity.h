#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct identity {
public:
    // prevent constructor by default
    identity& operator=(identity const&);
    identity(identity const&);
    identity();
};

} // namespace webrtc
