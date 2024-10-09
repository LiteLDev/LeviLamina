#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptCameraEaseBindings {
public:
    // prevent constructor by default
    ScriptCameraEaseBindings& operator=(ScriptCameraEaseBindings const&);
    ScriptCameraEaseBindings(ScriptCameraEaseBindings const&);
    ScriptCameraEaseBindings();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::EasingType> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
