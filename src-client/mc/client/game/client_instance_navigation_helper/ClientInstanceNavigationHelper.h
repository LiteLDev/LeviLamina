#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

MCNAPI void popBackToOrCreateNewStoreDataDrivenScreen(
    ::StoreDataDrivenScreenParams const& params,
    ::StoreDataDrivenScreenController&   controller
);
// NOLINTEND

} // namespace ClientInstanceNavigationHelper
