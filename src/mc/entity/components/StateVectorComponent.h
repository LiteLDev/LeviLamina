#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StateVectorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STATEVECTORCOMPONENT
public:
    StateVectorComponent& operator=(StateVectorComponent const&) = delete;
    StateVectorComponent(StateVectorComponent const&)            = delete;
    StateVectorComponent()                                       = delete;
#endif

public:
};
