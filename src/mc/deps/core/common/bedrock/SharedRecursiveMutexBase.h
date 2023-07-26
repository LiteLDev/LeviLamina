#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SharedRecursiveMutexBase {

public:
    // prevent constructor by default
    SharedRecursiveMutexBase& operator=(SharedRecursiveMutexBase const&) = delete;
    SharedRecursiveMutexBase(SharedRecursiveMutexBase const&)            = delete;
    SharedRecursiveMutexBase()                                           = delete;

public:
    /**
     * @symbol ?lock\@SharedRecursiveMutexBase\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock(); // NOLINT
    /**
     * @symbol ?unlock\@SharedRecursiveMutexBase\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock(); // NOLINT
};

}; // namespace Bedrock::Threading
