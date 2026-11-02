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

#ifdef LL_PLAT_S
    virtual ::Memory::MemoryCategory exchangeCurrentCategory(::Memory::MemoryCategory);
#else // LL_PLAT_C
    virtual ::Memory::MemoryCategory exchangeCurrentCategory(::Memory::MemoryCategory newCategory);
#endif

    virtual ::Memory::MemoryCategory getCurrentCategory() const;

#ifdef LL_PLAT_S
    virtual void setManuallyTrackedCategoryBytes(::Memory::MemoryCategory, uint64);
#else // LL_PLAT_C
    virtual void setManuallyTrackedCategoryBytes(::Memory::MemoryCategory category, uint64 bytes);
#endif

    virtual uint64 getCategoryAllocationCount(uint) const;

#ifdef LL_PLAT_S
    virtual uint64 getCategoryAllocatedMemory(uint) const;
#else // LL_PLAT_C
    virtual uint64 getCategoryAllocatedMemory(uint cat) const;
#endif

    virtual uint64 getCategoryTotalAllocationCount(uint) const;

    virtual void publish();

#ifdef LL_PLAT_S
    virtual void populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
#else // LL_PLAT_C
    virtual void populateCounters(
        ::std::vector<::Memory::MemoryCategoryCounter>& categoryCounters,
        uint64                                          minimumThresholdBytes
    ) const;
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isTracking() const;

#ifdef LL_PLAT_S
    MCNAPI ::Memory::MemoryCategory $exchangeCurrentCategory(::Memory::MemoryCategory);
#else // LL_PLAT_C
    MCNAPI ::Memory::MemoryCategory $exchangeCurrentCategory(::Memory::MemoryCategory newCategory);
#endif

    MCNAPI ::Memory::MemoryCategory $getCurrentCategory() const;

#ifdef LL_PLAT_S
    MCNAPI void $setManuallyTrackedCategoryBytes(::Memory::MemoryCategory, uint64);
#else // LL_PLAT_C
    MCNAPI void $setManuallyTrackedCategoryBytes(::Memory::MemoryCategory category, uint64 bytes);
#endif

    MCNAPI uint64 $getCategoryAllocationCount(uint) const;

#ifdef LL_PLAT_S
    MCNAPI uint64 $getCategoryAllocatedMemory(uint) const;
#else // LL_PLAT_C
    MCNAPI uint64 $getCategoryAllocatedMemory(uint cat) const;
#endif

    MCNAPI uint64 $getCategoryTotalAllocationCount(uint) const;

    MCNAPI void $publish();

#ifdef LL_PLAT_S
    MCNAPI void $populateCounters(::std::vector<::Memory::MemoryCategoryCounter>&, uint64) const;
#else // LL_PLAT_C
    MCNAPI void $populateCounters(
        ::std::vector<::Memory::MemoryCategoryCounter>& categoryCounters,
        uint64                                          minimumThresholdBytes
    ) const;
#endif


    // NOLINTEND
};

} // namespace Memory
