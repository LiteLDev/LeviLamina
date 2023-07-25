#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class StackRefResultT {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKREFRESULTT
public:
    StackRefResultT& operator=(StackRefResultT const&) = delete;
    StackRefResultT(StackRefResultT const&)            = delete;
    StackRefResultT()                                  = delete;
#endif

public:
};
