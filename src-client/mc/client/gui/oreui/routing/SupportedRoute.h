#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"

namespace OreUI {

struct SupportedRoute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             mRoute;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mModes;
    ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> mPrerequisites;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SupportedRoute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
