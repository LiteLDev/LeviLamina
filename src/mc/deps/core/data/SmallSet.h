#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SmallSet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMALLSET
public:
    SmallSet& operator=(SmallSet const&) = delete;
    SmallSet(SmallSet const&)            = delete;
    SmallSet()                           = delete;
#endif

public:
};
