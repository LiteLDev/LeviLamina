#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeTimeOptions {
public:
    // prevent constructor by default
    ScriptCameraFadeTimeOptions& operator=(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions();

public:
    // NOLINTBEGIN
    MCAPI bool isValid();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraFadeTimeOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
