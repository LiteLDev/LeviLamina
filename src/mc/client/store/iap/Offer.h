#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Offer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFER
public:
    Offer& operator=(Offer const&) = delete;
    Offer(Offer const&)            = delete;
    Offer()                        = delete;
#endif

public:
};
