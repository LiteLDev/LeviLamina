#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IClientInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICLIENTINSTANCE
public:
    IClientInstance& operator=(IClientInstance const&) = delete;
    IClientInstance(IClientInstance const&)            = delete;
    IClientInstance()                                  = delete;
#endif

public:
};
