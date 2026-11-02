#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAllocator.h"
#include "mc/external/gameface/cohtml/MemTagsType.h"

namespace OreUI {

class Allocator : public ::cohtml::IAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Allocator() /*override*/ = default;

    virtual void* Allocate(uint size, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void* Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual bool VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $Allocate(uint size, ::cohtml::MemTags::MemTagsType tag);

    MCNAPI void* $Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag);

    MCNAPI void $Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCNAPI void* $AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag);

    MCNAPI void $AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCNAPI void* $VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType);

    MCNAPI bool $VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
