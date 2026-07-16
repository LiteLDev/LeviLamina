#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"

namespace OreUI {

struct RouteAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>              route;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteHistoryAction> action;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RouteAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
