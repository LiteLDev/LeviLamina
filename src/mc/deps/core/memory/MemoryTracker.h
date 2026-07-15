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
    virtual ~MemoryTracker() = default;

    virtual bool isTracking() const;

    virtual ::Memory::MemoryCategory getCurrentCategory() const;

    virtual void setCurrentCategory(::Memory::MemoryCategory);

    virtual uint64 getCategoryAllocationCount(uint) const;

    virtual uint64 getCategoryAllocatedMemory(uint) const;

    virtual uint64 getCategoryTotalAllocationCount(uint) const;

    virtual void publish();

    virtual void populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Memory
