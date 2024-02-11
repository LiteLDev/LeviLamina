#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator {
public:
    // prevent constructor by default
    ScriptBlockLocationIterator& operator=(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockLocationIterator@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptBlockLocationIterator(class ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);

    // symbol:
    // ??0ScriptBlockLocationIterator@ScriptModuleMinecraft@@QEAA@V?$unique_ptr@VBaseBlockLocationIterator@@U?$default_delete@VBaseBlockLocationIterator@@@std@@@std@@@Z
    MCAPI explicit ScriptBlockLocationIterator(std::unique_ptr<class BaseBlockLocationIterator>);

    // symbol: ??4ScriptBlockLocationIterator@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(class ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);

    // symbol: ??1ScriptBlockLocationIterator@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockLocationIterator();

    // symbol:
    // ?bind@ScriptBlockLocationIterator@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockLocationIterator@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockLocationIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
