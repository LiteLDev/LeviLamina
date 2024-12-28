#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StoreCatalogItemType : int {
    None            = 0,
    Durable         = 1,
    OfferCollection = 2,
    Bundle          = 3,
};
