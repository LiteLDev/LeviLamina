#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Transport {
public:
    // prevent constructor by default
    Transport& operator=(Transport const&);
    Transport(Transport const&);
    Transport();
};

}; // namespace webrtc
