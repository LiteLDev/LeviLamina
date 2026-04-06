#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PurchaseEnabledScreenController {
public:
    // PurchaseEnabledScreenController inner types declare
    // clang-format off
    class PurchaseEnabledEntitlementChangeListener;
    // clang-format on

    // PurchaseEnabledScreenController inner types define
    enum class PurchaseStatus : uint {
        NoPurchaseAttemptActive     = 0,
        CoinPurchaseInProgress      = 1,
        DownloadInProgress          = 2,
        InsufficientFundsInProgress = 3,
        PurchaseAttemptFinished     = 4,
        PurchaseInProgress          = 5,
    };

    class PurchaseEnabledEntitlementChangeListener {};
};
