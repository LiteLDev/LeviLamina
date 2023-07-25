#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTING_RESULTANY
public:
    ResultAny& operator=(ResultAny const&) = delete;
    ResultAny(ResultAny const&)            = delete;
    ResultAny()                            = delete;
#endif

public:
};

}; // namespace Scripting
