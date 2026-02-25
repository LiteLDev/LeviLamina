#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct ViewId; }
// clang-format on

namespace OreUI {

struct PerformanceStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::OreUI::ViewId,
            ::std::chrono::nanoseconds,
            ::std::less<::OreUI::ViewId>,
            ::std::vector<::OreUI::ViewId>,
            ::std::vector<::std::chrono::nanoseconds>>>
        mLastCohtmlAdvanceDurationPerView;
    // NOLINTEND
};

} // namespace OreUI
