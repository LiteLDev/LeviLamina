#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IPlatformAllocator.h"
#include "mc/deps/cohtml/MemTagsType.h"

namespace OreUI {

class PlatformAllocatorWindowsFamily : public ::OreUI::IPlatformAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* allocate(uint size) /*override*/;

    virtual void* reallocate(void* ptr, uint size) /*override*/;

    virtual void deallocate(void* ptr) /*override*/;

    virtual void* alignedAllocate(uint size, uint alignment) /*override*/;

    virtual void alignedDeallocate(void* ptr) /*override*/;

    virtual void*
    virtualAllocate(void* hint, uint size, int protection, int flags, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual bool virtualFree(void* ptr, uint size, int flags, ::cohtml::MemTags::MemTagsType) /*override*/;

    virtual ~PlatformAllocatorWindowsFamily() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void* $allocate(uint size);

    MCAPI void* $reallocate(void* ptr, uint size);

    MCAPI void $deallocate(void* ptr);

    MCAPI void* $alignedAllocate(uint size, uint alignment);

    MCAPI void $alignedDeallocate(void* ptr);

    MCAPI void* $virtualAllocate(void* hint, uint size, int protection, int flags, ::cohtml::MemTags::MemTagsType);

    MCAPI bool $virtualFree(void* ptr, uint size, int flags, ::cohtml::MemTags::MemTagsType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
