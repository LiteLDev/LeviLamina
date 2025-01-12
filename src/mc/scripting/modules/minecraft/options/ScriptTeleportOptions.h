#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTeleportOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke27782;
    ::ll::UntypedStorage<4, 12> mUnk3014e4;
    ::ll::UntypedStorage<1, 2>  mUnk166a30;
    ::ll::UntypedStorage<4, 16> mUnk7acad9;
    ::ll::UntypedStorage<1, 2>  mUnkd39ed0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTeleportOptions(ScriptTeleportOptions const&);
    ScriptTeleportOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptTeleportOptions& operator=(::ScriptModuleMinecraft::ScriptTeleportOptions&&);

    MCAPI ::ScriptModuleMinecraft::ScriptTeleportOptions&
    operator=(::ScriptModuleMinecraft::ScriptTeleportOptions const&);

    MCAPI ~ScriptTeleportOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptTeleportOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
