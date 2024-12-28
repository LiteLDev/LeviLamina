#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RealmsStartPurchaseResult : int {
    Success                            = 0,
    OfferNotFound                      = 1,
    OfferNotAvailableIncompleteData    = 2,
    OfferNotAvailableAllOffersOccupied = 3,
};
