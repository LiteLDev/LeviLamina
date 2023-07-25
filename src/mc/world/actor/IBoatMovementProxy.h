#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IBoatMovementProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IBOATMOVEMENTPROXY
public:
    IBoatMovementProxy& operator=(IBoatMovementProxy const&) = delete;
    IBoatMovementProxy(IBoatMovementProxy const&)            = delete;
    IBoatMovementProxy()                                     = delete;
#endif

public:
};
