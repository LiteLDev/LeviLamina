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

#ifdef LL_PLAT_S
    virtual void setCurrentCategory(::Memory::MemoryCategory);
#else // LL_PLAT_C
    virtual void setCurrentCategory(::Memory::MemoryCategory category);
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

    // NOLINTEND
};

} // namespace Memory
