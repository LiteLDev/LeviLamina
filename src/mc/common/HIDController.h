#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HIDController {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDCONTROLLER
public:
    HIDController& operator=(HIDController const&) = delete;
    HIDController(HIDController const&)            = delete;
    HIDController()                                = delete;
#endif

public:
};
