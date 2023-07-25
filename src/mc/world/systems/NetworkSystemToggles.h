#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkSystemToggles {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSYSTEMTOGGLES
public:
    NetworkSystemToggles& operator=(NetworkSystemToggles const&) = delete;
    NetworkSystemToggles(NetworkSystemToggles const&)            = delete;
    NetworkSystemToggles()                                       = delete;
#endif

public:
};
