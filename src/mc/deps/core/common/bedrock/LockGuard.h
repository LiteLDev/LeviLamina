#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class LockGuard {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_LOCKGUARD
public:
    LockGuard& operator=(LockGuard const&) = delete;
    LockGuard(LockGuard const&)            = delete;
    LockGuard()                            = delete;
#endif

public:
};

}; // namespace Bedrock::Threading
