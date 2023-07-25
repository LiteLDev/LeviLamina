#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IClientInstanceProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICLIENTINSTANCEPROXY
public:
    IClientInstanceProxy& operator=(IClientInstanceProxy const&) = delete;
    IClientInstanceProxy(IClientInstanceProxy const&)            = delete;
    IClientInstanceProxy()                                       = delete;
#endif

public:
};
