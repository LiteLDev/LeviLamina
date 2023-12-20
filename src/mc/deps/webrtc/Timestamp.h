#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Timestamp {
public:
    // prevent constructor by default
    Timestamp& operator=(Timestamp const&);
    Timestamp(Timestamp const&);
    Timestamp();
};

}; // namespace webrtc
