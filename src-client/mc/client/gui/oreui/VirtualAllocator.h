#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IVirtualAllocator.h"

namespace OreUI {

class VirtualAllocator : public ::cohtml::IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VirtualAllocator() /*override*/ = default;

    virtual uint64 GetAllocationPageSize() const /*override*/;

    virtual uint64 GetCommitPageSize() const /*override*/;

    virtual void* Allocate(void* address, uint64 size, uint64 alignment, int protection, int flags) /*override*/;

    virtual bool Free(void* address, uint64 size, int flags) /*override*/;

    virtual bool PartialFree(void* address, uint64 oldSize, uint64 newSize, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $GetAllocationPageSize() const;

    MCAPI uint64 $GetCommitPageSize() const;

    MCAPI void* $Allocate(void* address, uint64 size, uint64 alignment, int protection, int flags);

    MCAPI bool $Free(void* address, uint64 size, int flags);

    MCAPI bool $PartialFree(void* address, uint64 oldSize, uint64 newSize, int);
    // NOLINTEND
};

} // namespace OreUI
