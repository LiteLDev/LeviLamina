#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILayoutContentRefreshable;
class ISceneFactory;
class ISceneStack;
class StoreDataDrivenScreenController;
struct StoreDataDrivenScreenParams;
namespace ClientInstanceNavigationHelper { struct CoinPurchaseScreenParams; }
// clang-format on

namespace ClientInstanceNavigationHelper {
// functions
// NOLINTBEGIN
MCNAPI void navigateToCoinPurchaseScreen_AssumingHasQueriedProducts(
    ::ClientInstanceNavigationHelper::CoinPurchaseScreenParams& params
);

MCNAPI bool navigateToNonGenericKnownPageID(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
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

MCNAPI void navigateToStoreHomeScreen(bool isPreGame, ::ISceneStack& sceneStack, ::ISceneFactory& sceneFactory);

MCNAPI void popBackToOrCreateNewStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);
// NOLINTEND

} // namespace ClientInstanceNavigationHelper
