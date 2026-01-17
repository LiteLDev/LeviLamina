#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/MemTagsType.h"

namespace cohtml {

class IAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* Allocate(uint, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void* Reallocate(void*, uint, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void Deallocate(void*, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void* AlignedAllocate(uint, uint, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void AlignedDeallocate(void*, ::cohtml::MemTags::MemTagsType) = 0;

    virtual void* VirtualAllocate(void*, uint, int, int, ::cohtml::MemTags::MemTagsType) = 0;

    virtual bool VirtualFree(void*, uint, int, ::cohtml::MemTags::MemTagsType) = 0;

    virtual ~IAllocator() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
