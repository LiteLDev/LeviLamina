#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IsStuckInColliderFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSTUCKINCOLLIDERFLAG
public:
    IsStuckInColliderFlag& operator=(IsStuckInColliderFlag const&) = delete;
    IsStuckInColliderFlag(IsStuckInColliderFlag const&)            = delete;
    IsStuckInColliderFlag()                                        = delete;
#endif

public:
};
