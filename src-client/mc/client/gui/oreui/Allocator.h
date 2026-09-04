#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IAllocator.h"
#include "mc/external/gameface/cohtml/MemTagsType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IPlatformAllocator; }
// clang-format on

namespace OreUI {

class Allocator : public ::cohtml::IAllocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IPlatformAllocator>> mPlatformAllocator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Allocator() /*override*/ = default;

    virtual void* Allocate(uint size, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void* Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag) /*override*/;

    virtual void AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void*
    VirtualAllocate(void* hint, uint size, int protection, int flags, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual bool VirtualFree(void* ptr, uint size, int flags, ::cohtml::MemTags::MemTagsType) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $Allocate(uint size, ::cohtml::MemTags::MemTagsType tag);

    MCAPI void* $Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType tag);

    MCFOLD void $Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void* $AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType tag);

    MCFOLD void $AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void* $VirtualAllocate(void* hint, uint size, int protection, int flags, ::cohtml::MemTags::MemTagsType);

    MCAPI bool $VirtualFree(void* ptr, uint size, int flags, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
