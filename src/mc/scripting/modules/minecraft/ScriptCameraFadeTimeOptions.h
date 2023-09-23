#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeTimeOptions {
public:
    // prevent constructor by default
    ScriptCameraFadeTimeOptions& operator=(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions();

public:
    // NOLINTBEGIN
    // symbol: ?isValid@ScriptCameraFadeTimeOptions@ScriptModuleMinecraft@@QEAA_NXZ
    MCAPI bool isValid();

    // symbol:
    // ?bind@ScriptCameraFadeTimeOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraFadeTimeOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraFadeTimeOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
