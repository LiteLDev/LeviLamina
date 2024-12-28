#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AecDump {
public:
    // prevent constructor by default
    AecDump& operator=(AecDump const&);
    AecDump(AecDump const&);
    AecDump();
};

} // namespace webrtc
