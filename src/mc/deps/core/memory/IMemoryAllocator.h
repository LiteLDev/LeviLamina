#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IMemoryAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMemoryAllocator() = default;

    virtual void* _allocate(uint64 size) = 0;

    virtual void _release(::gsl::not_null<void*> ptr) = 0;

    virtual void* _alignedAllocate(uint64 size, uint64 alignment) = 0;

    virtual void _alignedRelease(::gsl::not_null<void*> ptr) = 0;

    virtual uint64 _getUsableSize(::gsl::not_null<void*> ptr, bool alignedAllocation) = 0;

#ifdef LL_PLAT_S
    virtual void* _realloc(::gsl::not_null<void*> p, uint64 newSize) = 0;
#else // LL_PLAT_C
    virtual void* _realloc(::gsl::not_null<void*> ptr, uint64 newSize) = 0;
#endif

#ifdef LL_PLAT_S
    virtual void* _alignedRealloc(::gsl::not_null<void*> p, uint64 newSize, uint64 alignment) = 0;
#else // LL_PLAT_C
    virtual void* _alignedRealloc(::gsl::not_null<void*> ptr, uint64 newSize, uint64 alignment) = 0;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void* allocate(uint64 size);
    // NOLINTEND
};

} // namespace Bedrock::Memory
