#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetLocationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk3cc15e;
    ::ll::UntypedStorage<4, 20> mUnkff2cb5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraSetLocationOptions& operator=(ScriptCameraSetLocationOptions const&);
    ScriptCameraSetLocationOptions(ScriptCameraSetLocationOptions const&);
    ScriptCameraSetLocationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetLocationOptions const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraSetLocationOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
