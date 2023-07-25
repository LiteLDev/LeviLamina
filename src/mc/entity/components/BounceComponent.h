#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BounceComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNCECOMPONENT
public:
    BounceComponent& operator=(BounceComponent const&) = delete;
    BounceComponent(BounceComponent const&)            = delete;
    BounceComponent()                                  = delete;
#endif

public:
};
