#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::eventData {

class StoreOfferClickedData {
public:
    // prevent constructor by default
    StoreOfferClickedData& operator=(StoreOfferClickedData const&);
    StoreOfferClickedData(StoreOfferClickedData const&);
    StoreOfferClickedData();
};

}; // namespace Social::eventData
