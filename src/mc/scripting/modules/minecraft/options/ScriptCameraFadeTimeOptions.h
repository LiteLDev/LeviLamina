#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeTimeOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk110d85;
    ::ll::UntypedStorage<4, 4> mUnke60978;
    ::ll::UntypedStorage<4, 4> mUnkadca5f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraFadeTimeOptions& operator=(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions(ScriptCameraFadeTimeOptions const&);
    ScriptCameraFadeTimeOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isValid();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraFadeTimeOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
