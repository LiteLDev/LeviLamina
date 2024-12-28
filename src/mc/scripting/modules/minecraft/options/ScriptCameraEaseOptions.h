#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraEaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk935fed;
    ::ll::UntypedStorage<4, 8> mUnka1a4a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraEaseOptions& operator=(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions(ScriptCameraEaseOptions const&);
    ScriptCameraEaseOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraEaseOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
