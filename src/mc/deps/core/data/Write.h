#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Write {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITE
public:
    Write& operator=(Write const&) = delete;
    Write(Write const&)            = delete;
    Write()                        = delete;
#endif

public:
};
