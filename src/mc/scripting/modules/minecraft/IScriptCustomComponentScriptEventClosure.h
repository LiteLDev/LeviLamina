#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::CustomComponentEventHelpers {

class IScriptCustomComponentScriptEventClosure {
public:
    // prevent constructor by default
    IScriptCustomComponentScriptEventClosure& operator=(IScriptCustomComponentScriptEventClosure const&);
    IScriptCustomComponentScriptEventClosure(IScriptCustomComponentScriptEventClosure const&);
    IScriptCustomComponentScriptEventClosure();
};

} // namespace ScriptModuleMinecraft::CustomComponentEventHelpers
