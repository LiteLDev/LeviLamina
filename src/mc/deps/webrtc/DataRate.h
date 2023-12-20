#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DataRate {
public:
    // prevent constructor by default
    DataRate& operator=(DataRate const&);
    DataRate(DataRate const&);
    DataRate();
};

}; // namespace webrtc
