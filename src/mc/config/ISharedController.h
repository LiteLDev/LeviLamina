#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct ISharedController {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCAPABILITIES_ISHAREDCONTROLLER
public:
    ISharedController& operator=(ISharedController const&) = delete;
    ISharedController(ISharedController const&)            = delete;
    ISharedController()                                    = delete;
#endif

public:
};

}; // namespace PlayerCapabilities
