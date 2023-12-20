#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtlsTransportObserverInterface {
public:
    // prevent constructor by default
    DtlsTransportObserverInterface& operator=(DtlsTransportObserverInterface const&);
    DtlsTransportObserverInterface(DtlsTransportObserverInterface const&);
    DtlsTransportObserverInterface();
};

}; // namespace webrtc
