#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UsesOneWayCollisionFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USESONEWAYCOLLISIONFLAG
public:
    UsesOneWayCollisionFlag& operator=(UsesOneWayCollisionFlag const&) = delete;
    UsesOneWayCollisionFlag(UsesOneWayCollisionFlag const&)            = delete;
    UsesOneWayCollisionFlag()                                          = delete;
#endif

public:
};
