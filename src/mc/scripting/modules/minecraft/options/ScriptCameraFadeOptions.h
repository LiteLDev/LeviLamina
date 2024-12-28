#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk877077;
    ::ll::UntypedStorage<4, 32> mUnke0fb75;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFadeOptions(ScriptCameraFadeOptions const&);
    ScriptCameraFadeOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptCameraFadeOptions&
    operator=(::ScriptModuleMinecraft::ScriptCameraFadeOptions&&);

    MCAPI ::ScriptModuleMinecraft::ScriptCameraFadeOptions&
    operator=(::ScriptModuleMinecraft::ScriptCameraFadeOptions const&);

    MCAPI ~ScriptCameraFadeOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraFadeOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
