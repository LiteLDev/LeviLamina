#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct AssertResourceServiceErrorHandler {
public:
    // prevent constructor by default
    AssertResourceServiceErrorHandler& operator=(AssertResourceServiceErrorHandler const&);
    AssertResourceServiceErrorHandler(AssertResourceServiceErrorHandler const&);
    AssertResourceServiceErrorHandler();
};

} // namespace mce
