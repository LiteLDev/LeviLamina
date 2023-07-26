#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HIDController {

public:
    // prevent constructor by default
    HIDController& operator=(HIDController const&) = delete;
    HIDController(HIDController const&)            = delete;
    HIDController()                                = delete;
};
