#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Offer {
public:
    // prevent constructor by default
    Offer& operator=(Offer const&);
    Offer(Offer const&);
    Offer();
};
