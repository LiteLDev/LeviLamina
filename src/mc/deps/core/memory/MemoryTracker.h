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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Memory::MemoryTracker*& mInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isTracking() const;

    MCNAPI ::Memory::MemoryCategory $getCurrentCategory() const;

    MCNAPI void $setCurrentCategory(::Memory::MemoryCategory);

    MCNAPI uint64 $getCategoryAllocationCount(uint) const;

    MCNAPI uint64 $getCategoryAllocatedMemory(uint) const;

    MCNAPI uint64 $getCategoryTotalAllocationCount(uint) const;

    MCNAPI char const* $getCategoryName(uint) const;

    MCNAPI void $publish();

    MCNAPI void $populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Memory
