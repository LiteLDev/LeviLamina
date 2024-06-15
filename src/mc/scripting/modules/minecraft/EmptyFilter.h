#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct EmptyFilter {
public:
    // prevent constructor by default
    EmptyFilter& operator=(EmptyFilter const&);
    EmptyFilter(EmptyFilter const&);
    EmptyFilter();
};

}; // namespace ScriptModuleMinecraft
