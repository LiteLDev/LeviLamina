#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Closure {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_CLOSURE
public:
    Closure& operator=(Closure const&) = delete;
    Closure(Closure const&)            = delete;
    Closure()                          = delete;
#endif

public:
};

}; // namespace Scripting
