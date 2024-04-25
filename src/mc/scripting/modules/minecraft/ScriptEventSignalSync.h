#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class ScriptEventSignalSync {
public:
    // prevent constructor by default
    ScriptEventSignalSync& operator=(ScriptEventSignalSync const&);
    ScriptEventSignalSync(ScriptEventSignalSync const&);
    ScriptEventSignalSync();
};

}; // namespace ScriptModuleMinecraft
