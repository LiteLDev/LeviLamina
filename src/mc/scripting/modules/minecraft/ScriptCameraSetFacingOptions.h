#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetFacingOptions {
public:
    // prevent constructor by default
    ScriptCameraSetFacingOptions(ScriptCameraSetFacingOptions const&);
    ScriptCameraSetFacingOptions();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptCameraSetFacingOptions@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions&&);

    // symbol: ??4ScriptCameraSetFacingOptions@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions const&);

    // symbol: ??8ScriptCameraSetFacingOptions@ScriptModuleMinecraft@@QEBA_NAEBU01@@Z
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions const&) const;

    // symbol: ??1ScriptCameraSetFacingOptions@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptCameraSetFacingOptions();

    // symbol:
    // ?bind@ScriptCameraSetFacingOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraSetFacingOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
