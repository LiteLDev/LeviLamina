#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class IPlatformAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlatformAllocator() = default;

    virtual void* allocate(uint size) = 0;

    virtual void* reallocate(void* ptr, uint size) = 0;

    virtual void deallocate(void* ptr) = 0;

    virtual void* alignedAllocate(uint size, uint alignment) = 0;

    virtual void alignedDeallocate(void* ptr) = 0;

    virtual void* virtualAllocate(void* hint, uint size, int protection, int flags) = 0;

    virtual bool virtualFree(void* ptr, uint size, int flags) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
