#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CoRoutineResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mNumJobsExecuted;
    // NOLINTEND
};

} // namespace Scripting
