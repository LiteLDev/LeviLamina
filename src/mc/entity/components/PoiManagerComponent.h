#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace Poi { class Manager; }
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
// clang-format on

struct PoiManagerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Poi::TagProvider>> mTagProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Poi::Registry>>    mRegistry;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::DimensionType,
            ::Poi::Manager*,
            ::std::less<::DimensionType>,
            ::std::vector<::DimensionType>,
            ::std::vector<::Poi::Manager*>>>
        mManagers;
    // NOLINTEND
};
