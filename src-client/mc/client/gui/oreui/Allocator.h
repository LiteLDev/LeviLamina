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
    MCAPI void* $Allocate(uint size, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void* $Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void $Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void* $AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void $AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void* $VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType);

    MCAPI bool $VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND
};

} // namespace OreUI
