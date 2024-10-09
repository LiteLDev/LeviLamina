#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class UniqueLock {
public:
    // prevent constructor by default
    UniqueLock& operator=(UniqueLock const&);
    UniqueLock(UniqueLock const&);
    UniqueLock();
};

}; // namespace Bedrock::Threading
