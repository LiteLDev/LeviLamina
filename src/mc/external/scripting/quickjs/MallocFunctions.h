#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct MallocFunctions {
public:
    // prevent constructor by default
    MallocFunctions& operator=(MallocFunctions const&);
    MallocFunctions(MallocFunctions const&);
    MallocFunctions();
};

}; // namespace Scripting::QuickJS
