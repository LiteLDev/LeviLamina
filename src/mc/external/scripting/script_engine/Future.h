#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Future {
public:
    // prevent constructor by default
    Future& operator=(Future const&);
    Future(Future const&);
    Future();
};

}; // namespace Scripting
