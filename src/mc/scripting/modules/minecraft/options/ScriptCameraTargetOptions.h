#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraTargetOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkdf7419;
    ::ll::UntypedStorage<8, 32> mUnk8f46c0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraTargetOptions& operator=(ScriptCameraTargetOptions const&);
    ScriptCameraTargetOptions(ScriptCameraTargetOptions const&);
    ScriptCameraTargetOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCameraTargetOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraTargetOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
