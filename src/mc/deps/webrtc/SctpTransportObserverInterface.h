#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SctpTransportObserverInterface {
public:
    // prevent constructor by default
    SctpTransportObserverInterface& operator=(SctpTransportObserverInterface const&);
    SctpTransportObserverInterface(SctpTransportObserverInterface const&);
    SctpTransportObserverInterface();
};

}; // namespace webrtc
