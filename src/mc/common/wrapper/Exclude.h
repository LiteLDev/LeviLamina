#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Exclude {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXCLUDE
public:
    Exclude& operator=(Exclude const&) = delete;
    Exclude(Exclude const&)            = delete;
    Exclude()                          = delete;
#endif

public:
};
