#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CoRoutineResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4cbe63;
    // NOLINTEND

public:
    // prevent constructor by default
    CoRoutineResult& operator=(CoRoutineResult const&);
    CoRoutineResult(CoRoutineResult const&);
    CoRoutineResult();
};

} // namespace Scripting
