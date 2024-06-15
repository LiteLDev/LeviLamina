#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, typename T1>
class ScriptFilteredAfterEventSignal {
public:
    // prevent constructor by default
    ScriptFilteredAfterEventSignal& operator=(ScriptFilteredAfterEventSignal const&);
    ScriptFilteredAfterEventSignal(ScriptFilteredAfterEventSignal const&);
    ScriptFilteredAfterEventSignal();
};

}; // namespace ScriptModuleMinecraft
