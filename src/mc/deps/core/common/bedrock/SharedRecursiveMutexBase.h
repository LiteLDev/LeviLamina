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
    // NOLINTBEGIN
    /**
     * @symbol ?lock\@SharedRecursiveMutexBase\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @symbol ?unlock\@SharedRecursiveMutexBase\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock();
    // NOLINTEND
};

}; // namespace Bedrock::Threading
