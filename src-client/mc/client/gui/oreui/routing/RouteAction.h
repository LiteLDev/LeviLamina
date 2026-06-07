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
    // prevent constructor by default
    RouteAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouteAction(::std::string const& route, ::OreUI::RouteHistoryAction action);

    MCAPI ~RouteAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string const& route, ::OreUI::RouteHistoryAction action);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
