#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptUIManager {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> closeAllForms(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptUIManager> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
