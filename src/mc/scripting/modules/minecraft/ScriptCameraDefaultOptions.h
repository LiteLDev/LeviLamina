#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraDefaultOptions {
public:
    // prevent constructor by default
    ScriptCameraDefaultOptions& operator=(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions();

public:
    // NOLINTBEGIN
    // symbol: ??8ScriptCameraDefaultOptions@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraDefaultOptions const&) const;

    // symbol:
    // ?bind@ScriptCameraDefaultOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraDefaultOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraDefaultOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
