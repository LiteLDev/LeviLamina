#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

// auto generated forward declare list
// clang-format off
namespace Memory { struct MemoryCategoryCounter; }
// clang-format on

namespace Memory {

class MemoryTracker {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryTracker() = default;

    // vIndex: 1
    virtual bool isTracking() const;

    // vIndex: 2
    virtual ::Memory::MemoryCategory getCurrentCategory() const;

    // vIndex: 3
    virtual void setCurrentCategory(::Memory::MemoryCategory);

    // vIndex: 4
    virtual uint64 getCategoryAllocationCount(uint) const;

    // vIndex: 5
    virtual uint64 getCategoryAllocatedMemory(uint) const;

    // vIndex: 6
    virtual uint64 getCategoryTotalAllocationCount(uint) const;

    // vIndex: 7
    virtual char const* getCategoryName(uint) const;

    // vIndex: 8
    virtual void publish();

    // vIndex: 9
    virtual void populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isTracking() const;

    MCFOLD ::Memory::MemoryCategory $getCurrentCategory() const;

    MCFOLD void $setCurrentCategory(::Memory::MemoryCategory);

    MCFOLD uint64 $getCategoryAllocationCount(uint) const;

    MCFOLD uint64 $getCategoryAllocatedMemory(uint) const;

    MCFOLD uint64 $getCategoryTotalAllocationCount(uint) const;

    MCFOLD char const* $getCategoryName(uint) const;

    MCFOLD void $publish();

    MCFOLD void $populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Memory
