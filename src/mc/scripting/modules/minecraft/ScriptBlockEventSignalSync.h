#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class ScriptBlockEventSignalSync {
public:
    // prevent constructor by default
    ScriptBlockEventSignalSync& operator=(ScriptBlockEventSignalSync const&);
    ScriptBlockEventSignalSync(ScriptBlockEventSignalSync const&);
    ScriptBlockEventSignalSync();
};

}; // namespace ScriptModuleMinecraft
