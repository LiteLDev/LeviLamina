#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RealmsPurchaseFailureReason : uchar {
    PurchaseCancelled                 = 0,
    PurchaseFailed                    = 1,
    PurchaseFailedInsufficientFunds   = 2,
    PurchaseDisabledDueToStoreVersion = 3,
    MemberOfTooManyRealms             = 4,
    ErrorRealmNameAndTOS              = 5,
    ErrorRealmName                    = 6,
    ErrorTOS                          = 7,
    CreateFailedGeneric               = 8,
    NetworkDisabledError              = 9,
    NetworkGenericError               = 10,
    NotSignedInToXBL                  = 11,
    InvalidOffer                      = 12,
    PaymentServiceDown                = 13,
    FulfillmentFailed                 = 14,
    FulfillmentFailedProfanityName    = 15,
    OfferNotAvailable                 = 16,
};
