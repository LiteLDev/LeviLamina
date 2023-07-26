#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Future {

public:
    // prevent constructor by default
    Future& operator=(Future const&) = delete;
    Future(Future const&)            = delete;
    Future()                         = delete;
};

}; // namespace Scripting
