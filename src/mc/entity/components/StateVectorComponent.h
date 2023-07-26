#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StateVectorComponent {

public:
    // prevent constructor by default
    StateVectorComponent& operator=(StateVectorComponent const&) = delete;
    StateVectorComponent(StateVectorComponent const&)            = delete;
    StateVectorComponent()                                       = delete;
};
