#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

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
    // symbol: ??0ScriptUIManager@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ScriptUIManager();

    // symbol:
    // ?closeAllForms@ScriptUIManager@ScriptModuleMinecraftServerUI@@QEAA?AV?$Result@X$$V@Scripting@@AEAVScriptPlayer@ScriptModuleMinecraft@@@Z
    MCAPI class Scripting::Result<void> closeAllForms(class ScriptModuleMinecraft::ScriptPlayer&);

    // symbol: ??4ScriptUIManager@ScriptModuleMinecraftServerUI@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraftServerUI::ScriptUIManager&
    operator=(class ScriptModuleMinecraftServerUI::ScriptUIManager&&);

    // symbol: ??1ScriptUIManager@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ~ScriptUIManager();

    // symbol:
    // ?bind@ScriptUIManager@ScriptModuleMinecraftServerUI@@SA?AV?$ClassBindingBuilder@VScriptUIManager@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptUIManager> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
