#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayAnimationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk661f75;
    ::ll::UntypedStorage<8, 40> mUnk7de0bf;
    ::ll::UntypedStorage<4, 8>  mUnkb5e4ac;
    ::ll::UntypedStorage<8, 40> mUnk3a0d0d;
    ::ll::UntypedStorage<8, 40> mUnkb81727;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayAnimationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI ScriptPlayAnimationOptions(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPlayAnimationOptions&
    operator=(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);

    MCAPI ~ScriptPlayAnimationOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptPlayAnimationOptions> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayAnimationOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
