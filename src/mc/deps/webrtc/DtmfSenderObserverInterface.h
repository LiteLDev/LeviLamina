#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfSenderObserverInterface {
public:
    // prevent constructor by default
    DtmfSenderObserverInterface& operator=(DtmfSenderObserverInterface const&);
    DtmfSenderObserverInterface(DtmfSenderObserverInterface const&);
    DtmfSenderObserverInterface();
};

}; // namespace webrtc
