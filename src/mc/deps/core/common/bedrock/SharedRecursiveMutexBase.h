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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_threadHoldsSharedLock\@SharedRecursiveMutex\@Threading\@Bedrock\@\@MEAA_NVid\@thread\@std\@\@\@Z
     */
    virtual bool _threadHoldsSharedLock(std::thread::id) = 0;
    /**
     * @vftbl 2
     * @symbol ?_shouldLockForSharedAccess\@SharedRecursiveMutex\@Threading\@Bedrock\@\@MEAA_NVid\@thread\@std\@\@\@Z
     */
    virtual bool _shouldLockForSharedAccess(std::thread::id) = 0;
    /**
     * @vftbl 3
     * @symbol ?_shouldUnLockForSharedAccess\@SharedRecursiveMutex\@Threading\@Bedrock\@\@MEAA_NVid\@thread\@std\@\@\@Z
     */
    virtual bool _shouldUnLockForSharedAccess(std::thread::id) = 0;
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
