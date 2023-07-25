#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IMobMovementProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMOBMOVEMENTPROXY
public:
    IMobMovementProxy& operator=(IMobMovementProxy const&) = delete;
    IMobMovementProxy(IMobMovementProxy const&)            = delete;
    IMobMovementProxy()                                    = delete;
#endif

public:
};
