#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetPositionOptions {
public:
    // prevent constructor by default
    ScriptCameraSetPositionOptions(ScriptCameraSetPositionOptions const&);
    ScriptCameraSetPositionOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions const&);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions const&) const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetPositionOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
