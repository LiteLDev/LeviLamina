#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/gameplayui/GameStateModel.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"

// auto generated forward declare list
// clang-format off
class IOptions;
// clang-format on

namespace GameplayUI {

class GameplayUIRouteHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExpectedRoute;
    ::ll::TypedStorage<1, 5, ::GameplayUI::GameStateModel>    mModel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onGameServerConnectionChanged(bool isConnectedToGameServer);

    MCAPI void onPlayerOpenContainer(::SharedTypes::Legacy::ContainerType container);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isManagedRoute(::std::string const& route, ::IOptions const& options);
    // NOLINTEND
};

} // namespace GameplayUI
