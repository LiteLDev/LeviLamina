#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class Optional {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTIONAL
public:
    Optional& operator=(Optional const&) = delete;
    Optional(Optional const&)            = delete;
    Optional()                           = delete;
#endif

public:
};
