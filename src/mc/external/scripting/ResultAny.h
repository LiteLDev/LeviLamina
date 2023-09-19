#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);
    ResultAny();
};

}; // namespace Scripting
