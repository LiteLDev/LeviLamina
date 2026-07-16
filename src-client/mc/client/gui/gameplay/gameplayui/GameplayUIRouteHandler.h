#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/gameplayui/GameStateModel.h"

namespace GameplayUI {

class GameplayUIRouteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExpectedRoute;
    ::ll::TypedStorage<4, 16, ::GameplayUI::GameStateModel>   mModel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onLeaveWorld();
    // NOLINTEND
};

} // namespace GameplayUI
