#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Read {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_READ
public:
    Read& operator=(Read const&) = delete;
    Read(Read const&)            = delete;
    Read()                       = delete;
#endif

public:
};
