#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class SingleThreadedLock {
public:
    // prevent constructor by default
    SingleThreadedLock& operator=(SingleThreadedLock const&);
    SingleThreadedLock(SingleThreadedLock const&);
    SingleThreadedLock();
};

} // namespace Core
