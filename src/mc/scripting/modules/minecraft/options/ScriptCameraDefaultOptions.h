#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraDefaultOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk53b75f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraDefaultOptions& operator=(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions(ScriptCameraDefaultOptions const&);
    ScriptCameraDefaultOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraDefaultOptions const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraDefaultOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
