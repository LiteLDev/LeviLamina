#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0>
class DividedPos {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIVIDEDPOS
public:
    DividedPos& operator=(DividedPos const&) = delete;
    DividedPos(DividedPos const&)            = delete;
    DividedPos()                             = delete;
#endif

public:
};
