#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeOptions {
public:
    // prevent constructor by default
    ScriptCameraFadeOptions(ScriptCameraFadeOptions const&);
    ScriptCameraFadeOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptCameraFadeOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraFadeOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptCameraFadeOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraFadeOptions const&);

    MCAPI ~ScriptCameraFadeOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraFadeOptions> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
