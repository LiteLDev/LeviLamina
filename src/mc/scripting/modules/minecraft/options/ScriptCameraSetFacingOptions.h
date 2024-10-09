#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetFacingOptions {
public:
    // prevent constructor by default
    ScriptCameraSetFacingOptions(ScriptCameraSetFacingOptions const&);
    ScriptCameraSetFacingOptions();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions&&);

    MCAPI struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions&
    operator=(struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions const&);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions const& other) const;

    MCAPI ~ScriptCameraSetFacingOptions();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraSetFacingOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
