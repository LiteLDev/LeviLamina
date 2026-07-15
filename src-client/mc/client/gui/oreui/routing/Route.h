#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"

namespace OreUI {

struct Route {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             fileName;
    ::ll::TypedStorage<8, 32, ::std::string>             route;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>         mode;
    ::ll::TypedStorage<4, 4, ::OreUI::RoutePrerequisite> prerequisite;
    // NOLINTEND
};

} // namespace OreUI
