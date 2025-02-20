#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

// auto generated forward declare list
// clang-format off
namespace Memory { class ScopedMemoryCounter; }
// clang-format on

namespace Memory {

class MemoryTracker {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryTracker() = default;

    // vIndex: 1
    virtual ::Memory::MemoryCategory getCurrentCategory();

    // vIndex: 2
    virtual void setCurrentCategory(::Memory::MemoryCategory);

    // vIndex: 3
    virtual uint64 getCategoryAllocationCount(uint);

    // vIndex: 4
    virtual uint64 getCategoryAllocatedMemory(uint);

    // vIndex: 5
    virtual uint64 getCategoryTotalAllocationCount(uint);

    // vIndex: 6
    virtual char const* getCategoryName(uint);

    // vIndex: 7
    virtual void publish();

    // vIndex: 8
    virtual void _addScopedMemoryCounter(::Memory::ScopedMemoryCounter&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Memory::MemoryCategory $getCurrentCategory();

    MCFOLD void $setCurrentCategory(::Memory::MemoryCategory);

    MCFOLD uint64 $getCategoryAllocationCount(uint);

    MCFOLD uint64 $getCategoryAllocatedMemory(uint);

    MCFOLD uint64 $getCategoryTotalAllocationCount(uint);

    MCFOLD char const* $getCategoryName(uint);

    MCFOLD void $publish();

    MCFOLD void $_addScopedMemoryCounter(::Memory::ScopedMemoryCounter&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Memory
