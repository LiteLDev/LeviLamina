#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormResponse : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkacade9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormResponse& operator=(ScriptModalFormResponse const&);
    ScriptModalFormResponse(ScriptModalFormResponse const&);
    ScriptModalFormResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormResponse&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormResponse&&);

    MCAPI ~ScriptModalFormResponse();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
