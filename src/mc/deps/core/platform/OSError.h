#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class OSError {
public:
    // prevent constructor by default
    OSError& operator=(OSError const&);
    OSError(OSError const&);
    OSError();
};

}; // namespace Bedrock
