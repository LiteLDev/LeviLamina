#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/StackOperation.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

namespace SceneStackNavigation {
// functions
// NOLINTBEGIN
MCAPI void openPauseMenu(::IMinecraftGame& minecraftGame);

MCAPI void toMainMenu(::IMinecraftGame& minecraftGame, ::ui::StackOperation stackOperation);

MCAPI void tryShowXblFirstLaunchScreen(::IMinecraftGame& minecraftGame, bool isUserConnectedToPlatform);
// NOLINTEND

} // namespace SceneStackNavigation
