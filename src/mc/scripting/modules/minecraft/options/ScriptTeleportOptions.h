#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

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
    ScriptTeleportOptions& operator=(ScriptTeleportOptions const&);
    ScriptTeleportOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTeleportOptions(::ScriptModuleMinecraft::ScriptTeleportOptions const&);

    MCNAPI ~ScriptTeleportOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptTeleportOptions> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptTeleportOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
