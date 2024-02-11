#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptBlockEventSignal {
public:
    // prevent constructor by default
    IScriptBlockEventSignal& operator=(IScriptBlockEventSignal const&);
    IScriptBlockEventSignal(IScriptBlockEventSignal const&);
    IScriptBlockEventSignal();
};

}; // namespace ScriptModuleMinecraft
