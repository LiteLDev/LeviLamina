#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NoActionTimeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOACTIONTIMECOMPONENT
public:
    NoActionTimeComponent& operator=(NoActionTimeComponent const&) = delete;
    NoActionTimeComponent(NoActionTimeComponent const&)            = delete;
    NoActionTimeComponent()                                        = delete;
#endif

public:
};
