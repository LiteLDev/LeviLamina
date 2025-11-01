#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::eventData {

class StoreOfferClickedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7d0aeb;
    ::ll::UntypedStorage<8, 8> mUnkd3f764;
    ::ll::UntypedStorage<8, 8> mUnk68d142;
    ::ll::UntypedStorage<8, 8> mUnkbe32f3;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreOfferClickedData& operator=(StoreOfferClickedData const&);
    StoreOfferClickedData(StoreOfferClickedData const&);
    StoreOfferClickedData();

};

}
