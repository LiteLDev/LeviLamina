#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFixedBoomOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk91b1a2;
    ::ll::UntypedStorage<4, 16> mUnk261901;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFixedBoomOptions& operator=(ScriptCameraFixedBoomOptions const&);
    ScriptCameraFixedBoomOptions(ScriptCameraFixedBoomOptions const&);
    ScriptCameraFixedBoomOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraFixedBoomOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
