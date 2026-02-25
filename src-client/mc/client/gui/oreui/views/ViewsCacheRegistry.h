#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"

namespace OreUI {

class ViewsCacheRegistry {
public:
    // ViewsCacheRegistry inner types declare
    // clang-format off
    struct CachedView;
    // clang-format on

    // ViewsCacheRegistry inner types define
    struct CachedView {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::ViewId> viewId;
        ::ll::TypedStorage<8, 32, ::std::string>  url;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::std::array<::std::vector<::OreUI::ViewsCacheRegistry::CachedView>, 4>> mCachedViews;
    // NOLINTEND
};

} // namespace OreUI
