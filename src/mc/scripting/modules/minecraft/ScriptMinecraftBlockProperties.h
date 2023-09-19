#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptMinecraftBlockProperties {
public:
    // prevent constructor by default
    ScriptMinecraftBlockProperties& operator=(ScriptMinecraftBlockProperties const&);
    ScriptMinecraftBlockProperties(ScriptMinecraftBlockProperties const&);
    ScriptMinecraftBlockProperties();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptMinecraftBlockProperties@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMinecraftBlockProperties@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMinecraftBlockProperties>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
