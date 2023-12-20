#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class ClockInterface {
public:
    // prevent constructor by default
    ClockInterface& operator=(ClockInterface const&);
    ClockInterface(ClockInterface const&);
    ClockInterface();
};

}; // namespace rtc
