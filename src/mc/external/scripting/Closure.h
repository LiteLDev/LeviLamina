#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Closure {

public:
    // prevent constructor by default
    Closure& operator=(Closure const&) = delete;
    Closure(Closure const&)            = delete;
    Closure()                          = delete;
};

}; // namespace Scripting
