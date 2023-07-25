#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class InternalHeapAllocator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_MEMORY_INTERNALHEAPALLOCATOR
public:
    InternalHeapAllocator& operator=(InternalHeapAllocator const&) = delete;
    InternalHeapAllocator(InternalHeapAllocator const&)            = delete;
    InternalHeapAllocator()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?allocate\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAPEAX_K\@Z
     */
    virtual void* allocate(unsigned __int64);
    /**
     * @vftbl 2
     * @symbol ?release\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAXPEAX\@Z
     */
    virtual void release(void*);
    /**
     * @vftbl 3
     * @symbol ?alignedAllocate\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAPEAX_K0\@Z
     */
    virtual void* alignedAllocate(unsigned __int64, unsigned __int64);
    /**
     * @vftbl 4
     * @symbol ?alignedRelease\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAXPEAX\@Z
     */
    virtual void alignedRelease(void*);
    /**
     * @vftbl 5
     * @symbol ?getUsableSize\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAA_KPEAX\@Z
     */
    virtual unsigned __int64 getUsableSize(void*);
    /**
     * @vftbl 6
     * @symbol ?logCurrentState\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAXXZ
     */
    virtual void logCurrentState();
    /**
     * @vftbl 7
     * @symbol ?_realloc\@InternalHeapAllocator\@Memory\@Bedrock\@\@EEAAPEAXV?$not_null\@PEAX\@gsl\@\@_K\@Z
     */
    virtual void* _realloc(class gsl::not_null<void*>, unsigned __int64);
};

}; // namespace Bedrock::Memory
