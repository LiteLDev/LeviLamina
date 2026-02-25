#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteFlags.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct SupportedRoute; }
// clang-format on

namespace OreUI {

struct RouteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mFileName;
    ::ll::TypedStorage<4, 4, ::OreUI::EntryPoints::RouteFlags>        mScope;
    ::ll::TypedStorage<8, 32, ::std::string>                          mDefaultRoute;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SupportedRoute>> mSupportedRoutes;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteData& operator=(RouteData const&);
    RouteData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouteData(::OreUI::RouteData const&);

    MCAPI ~RouteData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouteData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
