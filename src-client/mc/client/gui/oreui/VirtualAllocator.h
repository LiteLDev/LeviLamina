#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/IVirtualAllocator.h"

namespace OreUI {

class VirtualAllocator : public ::cohtml::IVirtualAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VirtualAllocator() /*override*/ = default;

    virtual uint64 GetAllocationPageSize() const /*override*/;

    virtual uint64 GetCommitPageSize() const /*override*/;

    virtual void* Allocate(void*, uint64, uint64, int, int) /*override*/;

    virtual bool Free(void*, uint64, int) /*override*/;

    virtual bool PartialFree(void*, uint64, uint64, int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint64 $GetAllocationPageSize() const;

    MCFOLD uint64 $GetCommitPageSize() const;

    MCFOLD void* $Allocate(void*, uint64, uint64, int, int);

    MCFOLD bool $Free(void*, uint64, int);

    MCFOLD bool $PartialFree(void*, uint64, uint64, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
