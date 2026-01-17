#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVirtualAllocator() = default;

    virtual uint64 GetAllocationPageSize() const = 0;

    virtual uint64 GetCommitPageSize() const = 0;

    virtual void* Allocate(void*, uint64, uint64, int, int) = 0;

    virtual bool Free(void*, uint64, int) = 0;

    virtual bool PartialFree(void*, uint64, uint64, int) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
