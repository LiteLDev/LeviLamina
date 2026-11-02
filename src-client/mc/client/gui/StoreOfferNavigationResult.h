#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoreOfferNavigationResult : int {
    Navigated              = 0,
    NotOfferedOnStorefront = 1,
    StoreUnavailable       = 2,
};
