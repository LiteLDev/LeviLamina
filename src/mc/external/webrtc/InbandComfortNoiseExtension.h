#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class InbandComfortNoiseExtension {
public:
    // prevent constructor by default
    InbandComfortNoiseExtension& operator=(InbandComfortNoiseExtension const&);
    InbandComfortNoiseExtension(InbandComfortNoiseExtension const&);
    InbandComfortNoiseExtension();
};

} // namespace webrtc
