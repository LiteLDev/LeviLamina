#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, int T1>
class IScriptConditionalEventSignal {
public:
    // prevent constructor by default
    IScriptConditionalEventSignal& operator=(IScriptConditionalEventSignal const&);
    IScriptConditionalEventSignal(IScriptConditionalEventSignal const&);
    IScriptConditionalEventSignal();
};

}; // namespace ScriptModuleMinecraft
