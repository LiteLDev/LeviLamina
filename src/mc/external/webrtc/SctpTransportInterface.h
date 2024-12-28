#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SctpTransportInterface {
public:
    // prevent constructor by default
    SctpTransportInterface& operator=(SctpTransportInterface const&);
    SctpTransportInterface(SctpTransportInterface const&);
    SctpTransportInterface();
};

} // namespace webrtc
