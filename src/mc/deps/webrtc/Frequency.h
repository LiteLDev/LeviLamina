#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Frequency {
public:
    // prevent constructor by default
    Frequency& operator=(Frequency const&);
    Frequency(Frequency const&);
    Frequency();
};

}; // namespace webrtc
