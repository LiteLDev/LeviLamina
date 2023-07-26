#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class UniqueLock {

public:
    // prevent constructor by default
    UniqueLock& operator=(UniqueLock const&) = delete;
    UniqueLock(UniqueLock const&)            = delete;
    UniqueLock()                             = delete;
};

}; // namespace Bedrock::Threading
