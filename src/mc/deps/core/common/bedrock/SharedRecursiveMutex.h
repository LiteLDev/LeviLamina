#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SharedRecursiveMutex {

public:
    // prevent constructor by default
    SharedRecursiveMutex& operator=(SharedRecursiveMutex const&) = delete;
    SharedRecursiveMutex(SharedRecursiveMutex const&)            = delete;
    SharedRecursiveMutex()                                       = delete;

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
    virtual bool _threadHoldsSharedLock(std::thread::id);
    /**
     * @vftbl 2
     * @symbol ?_shouldLockForSharedAccess\@SharedRecursiveMutex\@Threading\@Bedrock\@\@MEAA_NVid\@thread\@std\@\@\@Z
     */
    virtual bool _shouldLockForSharedAccess(std::thread::id);
    /**
     * @vftbl 3
     * @symbol ?_shouldUnLockForSharedAccess\@SharedRecursiveMutex\@Threading\@Bedrock\@\@MEAA_NVid\@thread\@std\@\@\@Z
     */
    virtual bool _shouldUnLockForSharedAccess(std::thread::id);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_THREADING_SHAREDRECURSIVEMUTEX
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SharedRecursiveMutex();
#endif
    // NOLINTEND
};

}; // namespace Bedrock::Threading
