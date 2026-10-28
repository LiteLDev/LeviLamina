#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ISceneStackNavigator.h"
#include "mc/client/gui/RouteOperation.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

class SceneStackNavigator : public ::ISceneStackNavigator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    SceneStackNavigator& operator=(SceneStackNavigator const&);
    SceneStackNavigator(SceneStackNavigator const&);
    SceneStackNavigator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void toMainMenu(::ui::RouteOperation routeOperation) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $toMainMenu(::ui::RouteOperation routeOperation);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
