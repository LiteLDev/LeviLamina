#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class IPlatformAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlatformAllocator() = default;

    virtual void* allocate(uint) = 0;

    virtual void* reallocate(void*, uint) = 0;

    virtual void deallocate(void*) = 0;

    virtual void* alignedAllocate(uint, uint) = 0;

    virtual void alignedDeallocate(void*) = 0;

    virtual void* virtualAllocate(void*, uint, int, int) = 0;

    virtual bool virtualFree(void*, uint, int) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
