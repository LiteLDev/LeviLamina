#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct ISharedController {

public:
    // prevent constructor by default
    ISharedController& operator=(ISharedController const&) = delete;
    ISharedController(ISharedController const&)            = delete;
    ISharedController()                                    = delete;
};

}; // namespace PlayerCapabilities
