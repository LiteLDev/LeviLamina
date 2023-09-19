#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Closure {
public:
    // prevent constructor by default
    Closure& operator=(Closure const&);
    Closure(Closure const&);
    Closure();
};

}; // namespace Scripting
