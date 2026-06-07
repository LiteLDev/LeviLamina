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

    virtual void setCurrentCategory(::Memory::MemoryCategory category);

    virtual uint64 getCategoryAllocationCount(uint) const;

    virtual uint64 getCategoryAllocatedMemory(uint cat) const;

    virtual uint64 getCategoryTotalAllocationCount(uint) const;

    virtual void publish();

    virtual void populateCounters(
        ::std::vector<::Memory::MemoryCategoryCounter>& categoryCounters,
        uint64                                          minimumThresholdBytes
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void disableTracking();
#endif

    MCAPI static ::Memory::MemoryTracker& get();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isTracking() const;

    MCFOLD ::Memory::MemoryCategory $getCurrentCategory() const;

    MCFOLD void $setCurrentCategory(::Memory::MemoryCategory category);

    MCFOLD uint64 $getCategoryAllocationCount(uint) const;

    MCFOLD uint64 $getCategoryAllocatedMemory(uint cat) const;

    MCFOLD uint64 $getCategoryTotalAllocationCount(uint) const;

    MCFOLD void $publish();

    MCFOLD void $populateCounters(
        ::std::vector<::Memory::MemoryCategoryCounter>& categoryCounters,
        uint64                                          minimumThresholdBytes
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Memory
