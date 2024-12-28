#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockFillOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnka09902;
    ::ll::UntypedStorage<8, 168> mUnk602490;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFillOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockFillOptions(::ScriptModuleMinecraft::ScriptBlockFillOptions const&);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFillOptions& operator=(::ScriptModuleMinecraft::ScriptBlockFillOptions&&);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFillOptions&
    operator=(::ScriptModuleMinecraft::ScriptBlockFillOptions const&);

    MCAPI ~ScriptBlockFillOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBlockFillOptions> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFillOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
