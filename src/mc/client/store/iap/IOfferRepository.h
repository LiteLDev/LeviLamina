#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IOfferRepository {
public:
    // prevent constructor by default
    IOfferRepository& operator=(IOfferRepository const&);
    IOfferRepository(IOfferRepository const&);
    IOfferRepository();
};
