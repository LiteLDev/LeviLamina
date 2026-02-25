#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/MemoryAllocationType.h"
#include "mc/client/gui/oreui/debug/MemoryStatistics.h"
#include "mc/platform/brstd/flat_map.h"

namespace OreUI {

struct MemorySnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::OreUI::MemoryStatistics> mStatistics;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::OreUI::MemoryAllocationType,
            ::OreUI::MemoryStatistics,
            ::std::less<::OreUI::MemoryAllocationType>,
            ::std::vector<::OreUI::MemoryAllocationType>,
            ::std::vector<::OreUI::MemoryStatistics>>>
        mStatisticsByType;
    // NOLINTEND
};

} // namespace OreUI
