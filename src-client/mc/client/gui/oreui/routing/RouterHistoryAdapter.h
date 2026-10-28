#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
// clang-format on

namespace OreUI {

class RouterHistoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Router>> mRouter;
    ::ll::TypedStorage<8, 152, ::OreUI::RouterLocation>                 mCurrentLocationCache;
    ::ll::TypedStorage<8, 152, ::OreUI::RouterLocation>                 mFallbackLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterHistoryAdapter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterHistoryAdapter(::OreUI::Router& router);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Router& router);
    // NOLINTEND
};

} // namespace OreUI
