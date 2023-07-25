#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AABBContactPoint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBCONTACTPOINT
public:
    AABBContactPoint& operator=(AABBContactPoint const&) = delete;
    AABBContactPoint(AABBContactPoint const&)            = delete;
    AABBContactPoint()                                   = delete;
#endif

public:
};
