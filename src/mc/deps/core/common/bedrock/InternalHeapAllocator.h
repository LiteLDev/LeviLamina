#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

namespace Bedrock::Memory {

class InternalHeapAllocator : public ::Bedrock::Memory::IMemoryAllocator {

public:
    // prevent constructor by default
    InternalHeapAllocator& operator=(InternalHeapAllocator const&) = delete;
    InternalHeapAllocator(InternalHeapAllocator const&)            = delete;
    InternalHeapAllocator()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?allocate\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAPEAX_K\@Z
     */
    virtual void* allocate(uint64_t);
    /**
     * @vftbl 2
     * @symbol ?release\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAXPEAX\@Z
     */
    virtual void release(void*);
    /**
     * @vftbl 3
     * @symbol ?alignedAllocate\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAPEAX_K0\@Z
     */
    virtual void* alignedAllocate(uint64_t, uint64_t);
    /**
     * @vftbl 4
     * @symbol ?alignedRelease\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAXPEAX\@Z
     */
    virtual void alignedRelease(void*);
    /**
     * @vftbl 5
     * @symbol ?getUsableSize\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAA_KPEAX\@Z
     */
    virtual uint64_t getUsableSize(void*);
    /**
     * @vftbl 6
     * @symbol ?logCurrentState\@InternalHeapAllocator\@Memory\@Bedrock\@\@UEAAXXZ
     */
    virtual void logCurrentState();
    /**
     * @vftbl 7
     * @symbol ?_realloc\@InternalHeapAllocator\@Memory\@Bedrock\@\@EEAAPEAXV?$not_null\@PEAX\@gsl\@\@_K\@Z
     */
    virtual void* _realloc(class gsl::not_null<void*>, uint64_t);
    // NOLINTEND
};

}; // namespace Bedrock::Memory
