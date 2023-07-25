#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
class Factory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACTORY
public:
    Factory& operator=(Factory const&) = delete;
    Factory(Factory const&)            = delete;
    Factory()                          = delete;
#endif

public:
};
