#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetRotationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk99a05c;
    ::ll::UntypedStorage<4, 16> mUnkf25e78;
    ::ll::UntypedStorage<4, 20> mUnk7642ba;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraSetRotationOptions& operator=(ScriptCameraSetRotationOptions const&);
    ScriptCameraSetRotationOptions(ScriptCameraSetRotationOptions const&);
    ScriptCameraSetRotationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetRotationOptions const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraSetRotationOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
