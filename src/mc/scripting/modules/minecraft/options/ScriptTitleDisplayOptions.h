#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptTitleDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkf9096b;
    ::ll::UntypedStorage<4, 4>   mUnkeab427;
    ::ll::UntypedStorage<4, 4>   mUnkbb8084;
    ::ll::UntypedStorage<4, 4>   mUnkf6ce1b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTitleDisplayOptions& operator=(ScriptTitleDisplayOptions const&);
    ScriptTitleDisplayOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTitleDisplayOptions(::ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);

    MCAPI ~ScriptTitleDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
