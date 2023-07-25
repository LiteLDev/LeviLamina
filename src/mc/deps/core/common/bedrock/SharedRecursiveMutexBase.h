#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SharedRecursiveMutexBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_SHAREDRECURSIVEMUTEXBASE
public:
    SharedRecursiveMutexBase& operator=(SharedRecursiveMutexBase const&) = delete;
    SharedRecursiveMutexBase(SharedRecursiveMutexBase const&)            = delete;
    SharedRecursiveMutexBase()                                           = delete;
#endif

public:
    /**
     * @symbol ?lock\@SharedRecursiveMutexBase\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @symbol ?unlock\@SharedRecursiveMutexBase\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void unlock();
};

}; // namespace Bedrock::Threading
