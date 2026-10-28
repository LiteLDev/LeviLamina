#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/RouteOperation.h"
#include "mc/client/gui/StackOperation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class ISceneStack;
class SceneFactory;
namespace OreUI { class Router; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace SceneStackNavigation {
// functions
// NOLINTBEGIN
MCAPI void openPauseMenu(::IMinecraftGame& minecraftGame);

MCAPI void toMainMenu(::IMinecraftGame& minecraftGame, ::ui::StackOperation stackOperation);

MCAPI void toMainMenu(
    ::OreUI::Router&                             router,
    ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> sceneStack,
    ::SceneFactory&                              sceneFactory,
    ::ui::StackOperation                         stackOperation,
    ::ui::RouteOperation                         routeOperation
);

MCAPI void toPlayScreen(::IMinecraftGame& minecraftGame, ::ui::StackOperation stackOperation);

MCAPI void toPreStartScreen(
    ::ui::ScreenTechStackSelector const&         screenTechStackSelector,
    ::OreUI::Router&                             router,
    ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> sceneStack,
    ::SceneFactory&                              sceneFactory
);

MCAPI void tryShowXblFirstLaunchScreen(::IMinecraftGame& minecraftGame, bool isUserConnectedToPlatform);
// NOLINTEND

} // namespace SceneStackNavigation
