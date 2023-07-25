#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlySpeedComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYSPEEDCOMPONENT
public:
    FlySpeedComponent& operator=(FlySpeedComponent const&) = delete;
    FlySpeedComponent(FlySpeedComponent const&)            = delete;
    FlySpeedComponent()                                    = delete;
#endif

public:
};
