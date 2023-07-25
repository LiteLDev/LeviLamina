#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerMovementProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IPLAYERMOVEMENTPROXY
public:
    IPlayerMovementProxy& operator=(IPlayerMovementProxy const&) = delete;
    IPlayerMovementProxy(IPlayerMovementProxy const&)            = delete;
    IPlayerMovementProxy()                                       = delete;
#endif

public:
};
