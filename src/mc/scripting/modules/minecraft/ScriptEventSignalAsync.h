#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
class ScriptEventSignalAsync {
public:
    // prevent constructor by default
    ScriptEventSignalAsync& operator=(ScriptEventSignalAsync const&);
    ScriptEventSignalAsync(ScriptEventSignalAsync const&);
    ScriptEventSignalAsync();
};

}; // namespace ScriptModuleMinecraft
