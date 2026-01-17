#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

class IAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* Allocate(uint) = 0;

    virtual void* Reallocate(void*, uint) = 0;

    virtual void Deallocate(void*) = 0;

    virtual void* AlignedAllocate(uint, uint) = 0;

    virtual void AlignedDeallocate(void*) = 0;

    virtual ~IAllocator() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
