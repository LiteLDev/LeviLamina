#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SneakingComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNEAKINGCOMPONENT
public:
    SneakingComponent& operator=(SneakingComponent const&) = delete;
    SneakingComponent(SneakingComponent const&)            = delete;
    SneakingComponent()                                    = delete;
#endif

public:
};
