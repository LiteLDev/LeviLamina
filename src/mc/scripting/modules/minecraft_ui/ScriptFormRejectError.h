#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/external/scripting/runtime/Error.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptFormRejectError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6a5531;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptFormRejectError& operator=(ScriptFormRejectError const&);
    ScriptFormRejectError(ScriptFormRejectError const&);
    ScriptFormRejectError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptFormRejectError(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);

    MCAPI ~ScriptFormRejectError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptFormRejectError> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
