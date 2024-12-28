#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TransactionStatus : int {
    PurchaseStarted                 = 0,
    PurchaseSuccess                 = 1,
    PurchaseFailed                  = 2,
    PurchaseFailedInsufficientFunds = 3,
    PurchaseFailedPriceMismatch     = 4,
    PurchaseCanceled                = 5,
    FulfillmentStarted              = 6,
    FulfillmentSuccess              = 7,
    FulfillmentFailed               = 8,
    FulfillmentFailedProfanityName  = 9,
    CheckFulfillmentComplete        = 10,
    PurchasePending                 = 11,
};
