#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HIDController {
public:
    // prevent constructor by default
    HIDController& operator=(HIDController const&);
    HIDController(HIDController const&);
    HIDController();
};
