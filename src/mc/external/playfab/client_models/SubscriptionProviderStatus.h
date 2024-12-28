#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab::ClientModels {

enum class SubscriptionProviderStatus : int {
    SubscriptionProviderStatusNoError                         = 0,
    SubscriptionProviderStatusCancelled                       = 1,
    SubscriptionProviderStatusUnknownError                    = 2,
    SubscriptionProviderStatusBillingError                    = 3,
    SubscriptionProviderStatusProductUnavailable              = 4,
    SubscriptionProviderStatusCustomerDidNotAcceptPriceChange = 5,
    SubscriptionProviderStatusFreeTrial                       = 6,
    SubscriptionProviderStatusPaymentPending                  = 7,
};

}
