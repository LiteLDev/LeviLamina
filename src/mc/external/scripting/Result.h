#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class Result {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_RESULT
public:
    Result& operator=(Result const&) = delete;
    Result(Result const&)            = delete;
    Result()                         = delete;
#endif

public:
};

}; // namespace Scripting
