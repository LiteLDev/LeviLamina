#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

MCNAPI void navigateToStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);

MCNAPI void navigateToStoreHomeScreen(bool isPreGame, ::ISceneStack& sceneStack, ::ISceneFactory& sceneFactory);
// NOLINTEND

} // namespace ClientInstanceNavigationHelper
