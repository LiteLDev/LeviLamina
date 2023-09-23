#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class ScriptBlockEventSignalAsync {
public:
    // prevent constructor by default
    ScriptBlockEventSignalAsync& operator=(ScriptBlockEventSignalAsync const&);
    ScriptBlockEventSignalAsync(ScriptBlockEventSignalAsync const&);
    ScriptBlockEventSignalAsync();
};

}; // namespace ScriptModuleMinecraft
