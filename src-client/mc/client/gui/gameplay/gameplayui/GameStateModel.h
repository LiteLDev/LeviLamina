#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"

namespace GameplayUI {

struct GameStateModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::ContainerType>> activeContainer;
    ::ll::TypedStorage<1, 1, bool>                                                  isPlayerAlive;
    ::ll::TypedStorage<1, 1, bool>                                                  isPlayerSleeping;
    ::ll::TypedStorage<1, 1, bool>                                                  isConnectedToGameServer;
    // NOLINTEND
};

} // namespace GameplayUI
