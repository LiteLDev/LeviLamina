#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RoutePrerequisite.h"
#include "mc/client/gui/oreui/interface/RoutePrerequisiteState.h"

namespace OreUI {

class IRoutePrerequisiteHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRoutePrerequisiteHandler() = default;

    virtual ::OreUI::RoutePrerequisiteState
    handleRoutePrerequisites(::OreUI::RoutePrerequisite, ::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
