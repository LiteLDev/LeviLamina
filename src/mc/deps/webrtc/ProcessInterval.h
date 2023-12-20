#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ProcessInterval {
public:
    // prevent constructor by default
    ProcessInterval& operator=(ProcessInterval const&);
    ProcessInterval(ProcessInterval const&);
    ProcessInterval();
};

}; // namespace webrtc
