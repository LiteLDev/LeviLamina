#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/IAllocator.h"
#include "mc/deps/cohtml/MemTagsType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IPlatformAllocator; }
namespace OreUI { class MemoryTracker; }
// clang-format on

namespace OreUI {

class Allocator : public ::cohtml::IAllocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IPlatformAllocator>> mPlatformAllocator;
    ::ll::TypedStorage<8, 8, ::OreUI::MemoryTracker&>                        mMemoryTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    Allocator& operator=(Allocator const&);
    Allocator(Allocator const&);
    Allocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Allocator() /*override*/ = default;

    virtual void* Allocate(uint size, ::cohtml::MemTags::MemTagsType memtag) /*override*/;

    virtual void* Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType memtag) /*override*/;

    virtual void Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType memtag) /*override*/;

    virtual void AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual void* VirtualAllocate(
        void*                          hint,
        uint                           size,
        int                            protection,
        int                            flags,
        ::cohtml::MemTags::MemTagsType memtag
    ) /*override*/;

    virtual bool VirtualFree(void* ptr, uint size, int flags, ::cohtml::MemTags::MemTagsType memtag) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void* $Allocate(uint size, ::cohtml::MemTags::MemTagsType memtag);

    MCFOLD void* $Reallocate(void* oldPtr, uint size, ::cohtml::MemTags::MemTagsType memtag);

    MCFOLD void $Deallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCFOLD void* $AlignedAllocate(uint size, uint alignment, ::cohtml::MemTags::MemTagsType memtag);

    MCFOLD void $AlignedDeallocate(void* ptr, ::cohtml::MemTags::MemTagsType);

    MCAPI void*
    $VirtualAllocate(void* hint, uint size, int protection, int flags, ::cohtml::MemTags::MemTagsType memtag);

    MCAPI bool $VirtualFree(void* ptr, uint size, int flags, ::cohtml::MemTags::MemTagsType memtag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
