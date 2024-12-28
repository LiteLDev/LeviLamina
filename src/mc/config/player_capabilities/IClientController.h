#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerCapabilities {

struct IClientController {
public:
    // prevent constructor by default
    IClientController& operator=(IClientController const&);
    IClientController(IClientController const&);
    IClientController();
};

} // namespace PlayerCapabilities
