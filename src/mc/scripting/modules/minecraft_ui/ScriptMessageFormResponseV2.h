#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft_ui/BaseScriptFormResponse.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormResponseV2 : public ::ScriptModuleMinecraftServerUI::BaseScriptFormResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk352f3d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageFormResponseV2& operator=(ScriptMessageFormResponseV2 const&);
    ScriptMessageFormResponseV2(ScriptMessageFormResponseV2 const&);
    ScriptMessageFormResponseV2();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponseV2> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
