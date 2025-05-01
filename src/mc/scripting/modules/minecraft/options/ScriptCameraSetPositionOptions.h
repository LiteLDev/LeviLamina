#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraSetPositionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdde20e;
    ::ll::UntypedStorage<4, 16> mUnkfcef57;
    ::ll::UntypedStorage<4, 20> mUnkce9ea6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCameraSetPositionOptions& operator=(ScriptCameraSetPositionOptions const&);
    ScriptCameraSetPositionOptions(ScriptCameraSetPositionOptions const&);
    ScriptCameraSetPositionOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptCameraSetPositionOptions const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptCameraSetPositionOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
