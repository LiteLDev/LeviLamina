#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CoRoutineResult {
public:
    // prevent constructor by default
    CoRoutineResult& operator=(CoRoutineResult const&);
    CoRoutineResult(CoRoutineResult const&);
    CoRoutineResult();
};

}; // namespace Scripting
