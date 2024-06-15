#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorFilter {
public:
    // NOLINTBEGIN
    // symbol: ??0ScriptActorFilter@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptActorFilter();

    // symbol: ??0ScriptActorFilter@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptActorFilter(class ScriptModuleMinecraft::ScriptActorFilter&&);

    // symbol: ??0ScriptActorFilter@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptActorFilter(class ScriptModuleMinecraft::ScriptActorFilter const&);

    // symbol: ??4ScriptActorFilter@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptActorFilter& operator=(class ScriptModuleMinecraft::ScriptActorFilter&&);

    // symbol: ??4ScriptActorFilter@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptActorFilter&
    operator=(class ScriptModuleMinecraft::ScriptActorFilter const&);

    // symbol: ??1ScriptActorFilter@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorFilter();

    // symbol:
    // ?bind@ScriptActorFilter@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptActorFilter@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptActorFilter> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
