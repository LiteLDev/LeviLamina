#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1, typename T2>
class ScriptFilteredEventSignal {
public:
    // prevent constructor by default
    ScriptFilteredEventSignal& operator=(ScriptFilteredEventSignal const&);
    ScriptFilteredEventSignal(ScriptFilteredEventSignal const&);
    ScriptFilteredEventSignal();
};

}; // namespace ScriptModuleMinecraft
