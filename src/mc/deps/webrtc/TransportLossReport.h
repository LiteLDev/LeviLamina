#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct TransportLossReport {
public:
    // prevent constructor by default
    TransportLossReport& operator=(TransportLossReport const&);
    TransportLossReport(TransportLossReport const&);
    TransportLossReport();
};

}; // namespace webrtc
