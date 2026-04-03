#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/data/gameplayui/ChestType.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"

namespace GameplayUI {

struct GameStateModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::Legacy::ContainerType>> activeContainer;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameplayUI::ChestType>>              chestType;
    ::ll::TypedStorage<1, 1, bool>                                                  isPlayerAlive;
    ::ll::TypedStorage<1, 1, bool>                                                  isPlayerSleeping;
    ::ll::TypedStorage<1, 1, bool>                                                  isConnectedToGameServer;
    ::ll::TypedStorage<1, 1, bool>                                                  hasActiveDataDrivenUIScreen;
    // NOLINTEND
};

} // namespace GameplayUI
