#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/RouteOperation.h"

class ISceneStackNavigator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneStackNavigator() = default;

    virtual void toMainMenu(::ui::RouteOperation routeOperation) = 0;
    // NOLINTEND
};
