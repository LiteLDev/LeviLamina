#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VerticalCollisionFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VERTICALCOLLISIONFLAG
public:
    VerticalCollisionFlag& operator=(VerticalCollisionFlag const&) = delete;
    VerticalCollisionFlag(VerticalCollisionFlag const&)            = delete;
    VerticalCollisionFlag()                                        = delete;
#endif

public:
};
