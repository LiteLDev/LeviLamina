#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormResponse : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk343671;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageFormResponse& operator=(ScriptMessageFormResponse const&);
    ScriptMessageFormResponse(ScriptMessageFormResponse const&);
    ScriptMessageFormResponse();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponse> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
