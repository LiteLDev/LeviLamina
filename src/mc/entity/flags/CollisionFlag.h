#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CollisionFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONFLAG
public:
    CollisionFlag& operator=(CollisionFlag const&) = delete;
    CollisionFlag(CollisionFlag const&)            = delete;
    CollisionFlag()                                = delete;
#endif

public:
};
