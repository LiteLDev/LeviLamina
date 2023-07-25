#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Future {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_FUTURE
public:
    Future& operator=(Future const&) = delete;
    Future(Future const&)            = delete;
    Future()                         = delete;
#endif

public:
};

}; // namespace Scripting
