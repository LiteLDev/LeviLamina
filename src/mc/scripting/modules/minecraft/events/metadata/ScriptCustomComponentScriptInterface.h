#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <int T0>
class ScriptCustomComponentScriptInterface {
public:
    // prevent constructor by default
    ScriptCustomComponentScriptInterface& operator=(ScriptCustomComponentScriptInterface const&);
    ScriptCustomComponentScriptInterface(ScriptCustomComponentScriptInterface const&);
    ScriptCustomComponentScriptInterface();
};

} // namespace ScriptModuleMinecraft
