#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraEaseOptions {
public:
    // prevent constructor by default
    ScriptCameraEaseOptions& operator=(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptCameraEaseOptions const&) const;

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraEaseOptions> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
