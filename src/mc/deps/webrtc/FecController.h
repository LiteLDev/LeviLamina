#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecController {
public:
    // prevent constructor by default
    FecController& operator=(FecController const&);
    FecController(FecController const&);
    FecController();
};

}; // namespace webrtc
