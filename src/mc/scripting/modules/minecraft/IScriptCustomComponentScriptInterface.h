#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::CustomComponentEventHelpers {

class IScriptCustomComponentScriptInterface {
public:
    // prevent constructor by default
    IScriptCustomComponentScriptInterface& operator=(IScriptCustomComponentScriptInterface const&);
    IScriptCustomComponentScriptInterface(IScriptCustomComponentScriptInterface const&);
    IScriptCustomComponentScriptInterface();
};

} // namespace ScriptModuleMinecraft::CustomComponentEventHelpers
