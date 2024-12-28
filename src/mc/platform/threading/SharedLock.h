#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class SharedLock {
public:
    // prevent constructor by default
    SharedLock& operator=(SharedLock const&);
    SharedLock(SharedLock const&);
    SharedLock();
};

} // namespace Bedrock::Threading
