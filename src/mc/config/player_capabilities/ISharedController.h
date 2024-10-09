#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct ISharedController {
public:
    // prevent constructor by default
    ISharedController& operator=(ISharedController const&);
    ISharedController(ISharedController const&);
    ISharedController();
};

}; // namespace PlayerCapabilities
