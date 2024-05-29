#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockAreaSize {
public:
    // prevent constructor by default
    ScriptBlockAreaSize& operator=(ScriptBlockAreaSize const&);
    ScriptBlockAreaSize(ScriptBlockAreaSize const&);
    ScriptBlockAreaSize();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockAreaSize@ScriptModuleMinecraft@@QEAA@MMM@Z
    MCAPI ScriptBlockAreaSize(float x, float y, float z);

    // symbol: ??8ScriptBlockAreaSize@ScriptModuleMinecraft@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptBlockAreaSize const& other) const;

    // symbol:
    // ?bind@ScriptBlockAreaSize@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockAreaSize@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockAreaSize> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
