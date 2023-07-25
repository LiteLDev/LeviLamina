#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class UniqueLock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_UNIQUELOCK
public:
    UniqueLock& operator=(UniqueLock const&) = delete;
    UniqueLock(UniqueLock const&)            = delete;
    UniqueLock()                             = delete;
#endif

public:
};

}; // namespace Bedrock::Threading
