#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
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
    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormResponse&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormResponse&&);

    MCNAPI ~ScriptModalFormResponse();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
