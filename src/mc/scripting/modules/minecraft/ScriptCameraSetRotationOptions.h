#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetRotationOptions {
public:
    // prevent constructor by default
    ScriptCameraSetRotationOptions(ScriptCameraSetRotationOptions const&);
    ScriptCameraSetRotationOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions const&);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions const&) const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetRotationOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
