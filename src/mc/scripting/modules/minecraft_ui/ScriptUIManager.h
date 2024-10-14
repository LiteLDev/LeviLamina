#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptUIManager {
public:
    // prevent constructor by default
    ScriptUIManager& operator=(ScriptUIManager const&);
    ScriptUIManager(ScriptUIManager const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptUIManager();

    MCAPI class Scripting::Result<void> closeAllForms(class ScriptModuleMinecraft::ScriptPlayer&);

    MCAPI class ScriptModuleMinecraftServerUI::ScriptUIManager&
    operator=(class ScriptModuleMinecraftServerUI::ScriptUIManager&&);

    MCAPI ~ScriptUIManager();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptUIManager> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
