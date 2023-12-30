#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class IRuntime {
public:
    // prevent constructor by default
    IRuntime& operator=(IRuntime const&);
    IRuntime(IRuntime const&);
    IRuntime();
};

}; // namespace Scripting
