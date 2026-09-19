#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILayoutContentRefreshable;
class ISceneFactory;
class ISceneStack;
class MinecraftScreenModel;
class StoreDataDrivenScreenController;
struct LinksToStyle;
struct StoreDataDrivenScreenParams;
namespace ClientInstanceNavigationHelper { struct CoinPurchaseScreenParams; }
// clang-format on

namespace ClientInstanceNavigationHelper {
// functions
// NOLINTBEGIN
MCNAPI void navigateToCoinPurchaseScreen_AssumingHasQueriedProducts(
    ::ClientInstanceNavigationHelper::CoinPurchaseScreenParams& params
);

MCNAPI void navigateToStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);

MCNAPI void navigateToStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::ISceneStack&                       sceneStack,
    ::ISceneFactory&                     sceneFactory,
    ::ILayoutContentRefreshable&         existingController
);

MCNAPI void popBackToOrCreateNewStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);

MCNAPI bool tryRedirectToOreUIScreen(::LinksToStyle& linksToStyle, ::MinecraftScreenModel& model);
// NOLINTEND

} // namespace ClientInstanceNavigationHelper
