#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraDefaultOptions {
public:
    // prevent constructor by default
    ScriptCameraDefaultOptions& operator=(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraDefaultOptions const& other) const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraDefaultOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
